#include <iostream>
#include <string>


int main()
{
	std::string src;
	std::string pattern;
	std::cout << "Welcome to string finder!\n" << std::endl;
	std::cout << "please,enter a string: ";
	std::cin >> src;
	std::cout << "string length: " << src.size() << std::endl;
	std::cout << "now enter a keyword to search for: ";
	std::cin >> pattern;
	if(src.find(pattern) == std::string::npos){
		std::cout << "Sorry,the keyword you're searching for cannot be found.\n";

	} else {
		std::cout << "a match was found at position " << src.find(pattern)+1 << std::endl;
	}

}
