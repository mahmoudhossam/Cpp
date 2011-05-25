#include <iostream>

int main()
{
	enum difficulty{EASY=1,NORMAL=2,HARD=3,IMPOSSIBLE=4};
	std::cout << "Please,choose a difficulty: " << std::endl;
	std::cout << "1-easy" << std::endl;
	std::cout << "2-normal" << std::endl;
	std::cout << "3-hard" << std::endl;
	std::cout << "4-impossible" << std::endl;
	difficulty diff = EASY;
	std::cout << diff;
}
