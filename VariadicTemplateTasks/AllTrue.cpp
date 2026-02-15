#include <iostream>

template <typename ... Args>
bool AllTrue(Args ... args) {
  //return (... && args);
  return (args && ...);
}

int main(void) {

    std::cout << AllTrue(1, 3, 0, 5) << std::endl;
    std::cout << AllTrue(1, 3, 4, 5) << std::endl;

  return 0;
}
