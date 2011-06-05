#include <iostream>

int main(){
	std::cout << "Game Over!\n";
	std::cout << "this is a sample calculation: 8424 * 253 = " << 8424*253 << std::endl;
	enum difficulty {EASY,NORMAL,HARD,IMPOSSIBLE};
	enum sizes {BYTE=1,MEGA=2,GIGA=3,TERA=4};
	sizes my_size = MEGA;
	std::cout << my_size << std::endl;
	return 0;

}
