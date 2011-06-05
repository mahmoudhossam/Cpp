#include <iostream>

int main()
{
	int multi[3][3] = {{3,6,9},{2,4,8},{1,5,7}};
	for(int i = 0;i<3;i++){
		for(int j =0;j<3;j++){
			std::cout << multi[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
