#include <CL/sycl.hpp>
#include "ising/qubo.hpp"
#include <utility>
#include <functional>


int main()
{
     ising::LinearCoef<int, double> linear_c{ {1, -0.4}, {2, 1.1}, {3, -1.0}, {4, -1.2} };

     ising::QuadraticCoef<int, double> quadratic_c
     {
          {std::make_pair(1, 2), 1.0}, {std::make_pair(1, 3), 7.2}, {std::make_pair(1, 4), 1.0},
          {std::make_pair(2, 3), 2.0}, {std::make_pair(2, 4), 1.9},
          {std::make_pair(3, 4), 3.0}
     };

     // Create a QUBO instance
     ising::QUBOModel<int, double> qubos(linear_c, quadratic_c);

     // Print informations of qubo
     qubos.print();

     return 0;

}