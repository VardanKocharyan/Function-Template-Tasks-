#include <iostream>
#include <vector>
#include <list>

template<typename Container>
typename Container::value_type SumContainer(const Container& c)
{
    typename Container::value_type sum = 0;
    for(const typename Container::value_type& x : c) 
    {
        sum += x;
    }
    return sum;
}


int main(void) {
  

    std::vector<int> vi{1, 2, 3, 4, 5};
    std::list<float> l{1.2f, 2.5f, 3.4f};
    std::vector<double> vd{0.5, 0.5, 1.0};
    


    std::cout << SumContainer(vi) << std::endl;
    std::cout << SumContainer(l) << std::endl;
    std::cout << SumContainer(vd) << std::endl;


    return 0;
}
