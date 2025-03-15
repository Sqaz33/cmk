#ifndef BIN_SEARCH_LIB_HPP
#define BIN_SEARCH_LIB_HPP

#include <utility> 
#include <vector>
#include <cstddef>

namespace lib {
    std::pair<bool, int> binary_search(const std::vector<int>& arr, int target);
} // namespace lib

#endif // BIN_SEARCH_LIB_HPP

