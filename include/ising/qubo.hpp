#include <unordered_map>
#include <ostream>

#ifndef QUBO_MODEL_HPP__
#define QUBO_MODEL_HPP__

namespace qubo {
        template <class NodeType, class CoefType>
        using LinearCoef = std::unordered_map<NodeType, CoefType>; 

        template <class NodeType, class CoefType>
        using QuadraticCoef = std::unordered_map<std::pair<NodeType, NodeType>, CoefType>; 
        

        template<class NodeType, class CoefType>
        class QUBOModel
        {
            protected: 

                LinearCoef<NodeType, CoefType> linear;
                QuadraticCoef<NodeType, CoefType> quadratic; 



            public:
                QUBOModel( const LinearCoef<NodeType, CoefType> &c_linear, const QuadraticCoef<NodeType, CoefType> &c_quadratic);
                void print();
        };
};

#endif