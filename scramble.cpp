#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <algorithm>

int main()
{
	srand(time(0));
	int random = rand();
	std::string word = "scramble";
	std::random_shuffle(word.begin(),word.end());
	std::cout << word << std::endl;
	return 0;

}
