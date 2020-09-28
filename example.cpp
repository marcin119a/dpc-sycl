#include <CL/sycl.hpp>

int main() {
    {
        buffer bufA {A}, bufB {B}, bufC {C}; 
        queue q;
        q.submit([&](handler &h) {
            auto A = bufA.get_access(h, read_only);
            auto B = bufB.get_access(h, read_only);
            auto C = bufC.get_access(h, read_only);
            h.parallel_for(1024, [=](auto i) {
                C[i] = A[i] + B[i]''
            });
        });
    

    }

    for (int i = 0; i < 1024; i++)
        std::cout << "[C" << i << "] = " << C[i] <<  std:endl;

}