#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(3);
	numbers.push_back(2);
	std::vector<int>::iterator it;
	for(it = numbers.begin(); it != numbers.end() ;it++){
		(*it)++;
		std::cout << *it << std::endl;
	}
}
