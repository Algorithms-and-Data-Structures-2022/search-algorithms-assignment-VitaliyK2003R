#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {
    int left = 0;
    int right = static_cast<int>(data.size())-1;

    while (left <= right) {
      if (data[left] == search_element) {
        return left;
      }
      if (data[right] == search_element) {
        return right;
      }
      left++;
      right--;
    }
    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    return std::nullopt;
  }

}  // namespace assignment