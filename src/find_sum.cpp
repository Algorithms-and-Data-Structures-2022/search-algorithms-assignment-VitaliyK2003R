#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {
    if (static_cast<int>(data.size()) == 1) {
      return std::nullopt;
    }
    int left = 0;
    int right = static_cast<int>(data.size())-1;
    while (left < right) {
      if ((data[left] + data[right]) == sum) {
        return std::make_pair(left,right);
      }
      if ((data[left] + data[right]) > sum) {
        right--;
      }
      if ((data[left] + data[right]) < sum) {
        left++;
      }
    }
    return std::nullopt;

    // Tips: для создания пары (pair) используйте функцию std::make_pair

  }

}  // namespace assignment