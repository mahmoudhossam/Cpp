#include <iostream>
#include <vector>

int main()
{
	std::vector<std::string> inventory(10,"empty slot");
	inventory.insert(inventory.begin(),"sword");
	inventory.push_back("Shield");
	inventory.erase((inventory.begin() + 5));
	std::cout << "current items:\n";
	std::vector<std::string>::const_iterator iterator;
	int counter = 1;
	for(iterator=inventory.begin();iterator != inventory.end();iterator++){
		std::cout << counter <<"- " << *iterator << std::endl;
		counter++;
	}
	return 0;
}
