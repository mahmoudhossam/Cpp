#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <iostream>
#include <ctime>

int main()
{
    boost::random::mt19937 rng(std::time(0));
    boost::random::uniform_int_distribution<> s(1, 6);
    int x = s(rng);
    std::cout << x << std::endl;
    return 0;
}
