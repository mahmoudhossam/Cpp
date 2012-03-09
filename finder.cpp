#include <iostream>
#include <string>


int main()
{
	std::string src;
	std::string pattern;
	std::cout << "Welcome to string finder!\n" << std::endl;
	std::cout << "Please,enter a string: ";
	std::cin >> src;
	std::cout << "String length: " << src.size() << std::endl;
	std::cout << "Now enter a keyword to search for: ";
	std::cin >> pattern;
	if(src.find(pattern) == std::string::npos){
		std::cout << "Sorry,the keyword you're searching for cannot be found.\n";

	} else {
		std::cout << "A match was found at position " << src.find(pattern)+1 << std::endl;
	}

}
