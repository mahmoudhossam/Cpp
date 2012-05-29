#include <iostream>

int main()
{
    std::cout << "Enter no. of times: ";
    int times;
    std::cin >> times;
    for(int i = 0; i < times; i++) {
        std::cout << "Hello, World!" << std::endl;
    }
    return 0;
}
