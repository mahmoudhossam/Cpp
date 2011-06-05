#include <iostream>
#include <string>


int main()
{
	std::string items[6];
	items[0] = "Sword";
	items[1] = "Axe";
	items[2] = "Hammer";
	items[3] = "Health Potion";
	items[4] = "Mana Potion";
	items[5] = "Shield";
	std::cout << "Current items:" << std::endl;
	for(int i = 0;i<6;i++){
		std::cout << items[i] << std::endl;
	}

}
