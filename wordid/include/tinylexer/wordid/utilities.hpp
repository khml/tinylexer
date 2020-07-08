//
// Created by KHML on 2020/07/08.
//

#ifndef TINYLEXER_WORDID_UTILITIES_HPP
#define TINYLEXER_WORDID_UTILITIES_HPP

#include <string>
#include <vector>

namespace wordid
{
    void uniqSort(std::vector<size_t>& strContainer);

    template<typename T>
    void printVec(const std::vector<T>& container);

    template<>
    void printVec(const std::vector<std::string>& container);
}

#include <tinylexer/wordid/impl/utilities_impl.hpp>

#endif //TINYLEXER_WORDID_UTILITIES_HPP