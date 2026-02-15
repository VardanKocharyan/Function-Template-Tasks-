#include  <iostream>

template<typename ... Args>
void printAll(Args ... args) {
    //((std::cout << args << " "), ...);
    //(..., (std::cout << args << " "));
    (std::cout << ... << args);

}

int main(void) {
  
    printAll(1, 3, 4.3, 'a');


  return 0;
}
