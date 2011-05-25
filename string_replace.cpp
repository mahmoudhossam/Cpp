#include <iostream>
#include <string>

int main()
{
	std::string word = "Mahmoud";
	word.insert(0,"X");
	word.erase(1,1);
	std::cout << word << std::endl;
}
