#include <iostream>
#include <string>

int main()
{
	int group;
	int lost;
	const int gold = 900;
	std::string name;
	std::cout << "Welcome to Lost Fortune\n\n";
	std::cout << "Please enter the following for your personalized adventure.\n";
	std::cout << "Enter a number: ";
	std::cin >> group;
	std::cout << "Enter another number,smaller than the first this time: ";
	std::cin >> lost;
	int remaining = group-lost;
	int change = gold % remaining;
	if(lost > group){
		std::cout << "\nERROR: the first number should be bigger than the second,exiting....";
		return 1;
	}
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "A brave group of " << group << " set out on a quest -- in search for the lost treasure of the Ancient Dwarves. ";
	std::cout << "The group was led by that legendary rogue, " << name \
	<< ".\n\n";
	std::cout <<"Along the way, a band of maurading ogres ambushed the party. All fought bravely under the command of " << name << ", and the ogres were defeated, but at a cost. of the adventurers, ";
	std::cout << lost << " were vanquished, leaving just " << remaining;
	std::cout << " in the group.\n\nThe party was about to give up all hope. But while laying the deceased to rest,they stumbled upon the buried fortune. so the adventurers split 900 gold pieces.";
	if (change > 0){
		std::cout << name << " held on to the extra " << change <<  \
		" pieces just to keep things fair,of course.";
	}
	return 0;
}
