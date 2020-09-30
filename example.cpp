#include <CL/sycl.hpp>

int main() {
    {
        std::vector<float> A(1024), B(1024), C(1024);
        sycl::buffer bufA {A}, bufB {B}, bufC {C}; 
        sycl::queue q;
        q.submit([&](sycl::handler &h) {
            auto A = bufA.get_access(h, sycl::read_only);
            auto B = bufB.get_access(h, sycl::read_only);
            auto C = bufC.get_access(h, sycl::read_only);
            h.parallel_for(1024, [=](auto i) {
                C[i] = A[i] + B[i];
            });
        });

    for (int i = 0; i < 1024; i++)
        std::cout << "[C" << i << "] = " << C[i] <<  std::endl;
    }

  

}