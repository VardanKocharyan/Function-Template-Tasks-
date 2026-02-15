#include <iostream>

template<typename T>
void Min(T* min, T arg) {
    if(*min < arg) return;
    *min = arg;
}


template<typename T, typename ... Args>
T MinValue(T item, Args ... args) {
    T min = item;
    (Min(&min, args), ...);
    return min;
}

int main(void) {

    std::cout << MinValue(3, 2, 3, 4);


  return 0;
}
