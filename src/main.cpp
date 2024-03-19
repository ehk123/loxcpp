#include <algorithm>
#include <array>
#include <iostream>

int main() {
  std::array<int, 5> my_array = {1, 52, 2, 4, 9};
  std::sort(my_array.begin(), my_array.end());

  for (auto value : my_array) {
    std::cout << value << ' ';
  }
  std::cout << '\n';
  return 0;
}