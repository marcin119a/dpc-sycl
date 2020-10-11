#include "ising/qubo.hpp"
#include <iostream>

template<class NodeType, class CoefType>
using LinearCoef = qubo::LinearCoef<NodeType, CoefType>; 

template<class NodeType, class CoefType>
using QuadraticCoef = qubo::QuadraticCoef<NodeType, CoefType>; 


template<class NodeType, class CoefType>
class QUBOModel
{
    protected: 

        LinearCoef<NodeType, CoefType> linear;

        QuadraticCoef<NodeType, CoefType> quadratic; 



    public:
        QUBOModel( const LinearCoef<NodeType, CoefType> &c_linear, const QuadraticCoef<NodeType, CoefType> &c_quadratic)
        {
            linear = c_linear;
            quadratic = c_quadratic;
        }
        

    void print(){
        std::cout << "QUBO model" << std::endl;

        for(auto &qii: linear)
        {
            std::cout << "" << qii.first << qii.second << std::endl;
        }

        for(auto &qij: quadratic)
        {
            std::cout << qij.first.first << qij.first.second << std::endl; 
        }
    }
};


