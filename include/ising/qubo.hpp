#include <unordered_map>
#include <ostream>
#include <string>
#include "hash.hpp"

#ifndef QUBO_MODEL_HPP__
#define QUBO_MODEL_HPP__


namespace ising {
           
        template <class NodeType, class CoefType>
        using LinearCoef = std::unordered_map<NodeType, CoefType>; 

        template <class NodeType, class CoefType>
        using QuadraticCoef = std::unordered_map<std::pair<NodeType, NodeType>, CoefType, hash::hash_pair>;


        template<class NodeType, class CoefType>
        class QUBOModel
        {
            protected: 
                LinearCoef<NodeType, CoefType> linear;
                QuadraticCoef<NodeType, CoefType> quadratic; 


            public:
                QUBOModel(LinearCoef<NodeType, CoefType> &c_linear, QuadraticCoef<NodeType, CoefType> &c_quadratic);
                void print();
        };

template<class NodeType, class CoefType>
QUBOModel<NodeType, CoefType>::QUBOModel( 
        ising::LinearCoef<NodeType, CoefType> &c_linear, 
        ising::QuadraticCoef<NodeType, CoefType> &c_quadratic
        ) {
        linear = c_linear;
        quadratic = c_quadratic;
    }

template<class NodeType, class CoefType>
void QUBOModel<NodeType,CoefType>::print(){
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

#endif