#include <iostream>

template<typename ... Args>
int CountArguments(Args ... args) {
    return sizeof...(args);

    //int count = 0;
    //((void)args, ++count, ...);
    //return count;
}

int main(void) {

  std::cout << CountArguments(1, 3, 4, 5, 6, 2) << std::endl;


  return 0;
}
