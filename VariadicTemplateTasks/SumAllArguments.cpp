#include <iostream>

template <typename ... Args>
auto sum(Args ... args) {
  return (... + args);
  //return (args + ...);
}

int main(void) {

    std::cout << sum('A', 2, 3, 4);

  return 0;
}
