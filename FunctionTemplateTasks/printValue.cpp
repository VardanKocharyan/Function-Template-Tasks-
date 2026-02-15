#include <iostream>
//fn.
template<typename T>
void printValue(T val) {
    std::cout << "Other types:" << std::endl;
}
//specalization
template<>
void printValue<int>(int val) {
    std::cout << val << std::endl;
}
template<>
void printValue<double>(double val) {
    std::cout << val << std::endl;
}
template<>
void printValue<char*>(char* val) {
    std::cout << *val << std::endl;
}

int main(void) {
    
    int i = 0;
    double d = 0.0;
    char* c = new char('c');
    const char s[] = "Hello World";

    //auto a = s;
    //B<decltype(a)> aType;

    printValue(i);
    printValue(d);
    printValue(c);
    printValue(s);

    delete c;

    return 0;
}
