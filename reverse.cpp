#include <iostream>

std::string reverse(std::string str)
{
    std::string temp = "";
    for(int i = str.length(); i >= 0; i--)
    {
        temp += str[i];
    }
    return temp;
}

int main()
{
    std::cout << reverse("Example") << std::endl;
}
