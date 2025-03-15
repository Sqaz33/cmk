#include "bin-search-lib.hpp"

namespace lib {
    std::pair<bool, int> binary_search(const std::vector<int>& arr, int target) {
        if (!arr.size()) return {false, 0};
        
        int lo = 0;
        int hi = arr.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (target < arr[mid])
                hi = mid - 1;
            else if (target > arr[mid]) 
                lo = mid + 1;
            else return {true, mid};
        }

        return {false, 0};
    }
} // namespace lib