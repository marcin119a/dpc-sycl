#ifndef HASH_NODE_HPP__
#define HASH_NODE_HPP__

#include <utility>
#include <cstdint>
#include <iostream>

namespace hash
{

    struct hash_pair {

        template <class T1, class T2>
        size_t operator()(const std::pair<T1, T2>& p) const {
            auto lhs = std::hash<T1>{}(p.first); 
            auto rhs = std::hash<T2>{}(p.second); 
            return lhs^(rhs);
        }
    };
}
#endif