#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> id;
	id.push_back(5);
	id.push_back(1);
	id.push_back(-6);
	std::sort(id.begin(),id.end());
	std::vector<int>::const_iterator iterator;
	for(iterator = id.begin();iterator != id.end();iterator++){
		std::cout << *iterator << std::endl;
	}

}
