#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& data, int search_element) const {
    if (static_cast<int>(data.size()) == 0) {
      return std::nullopt;
    }
    for (int i = 0; i < static_cast<int>(data.size()); i++) {
      if (data[i] == search_element) {
        return i;
      }
    }
    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    return std::nullopt;
  }

}  // namespace assignment