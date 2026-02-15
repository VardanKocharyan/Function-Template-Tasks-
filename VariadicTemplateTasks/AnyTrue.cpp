#include <iostream>

template<typename ... Args>
bool AnyTrue(Args ... args) {
  //return (args || ...);
  return (... || args);
}

int main(void) {

    std::cout << AnyTrue(0, 0, 0) << std::endl;
    std::cout << AnyTrue(0, 1, 0) << std::endl;


  return 0;
}
