#include <iostream>

int main()
{
	std::cout << "Enter a number: ";
	int num;
	int prev;
	int pre_prev;
	if (std::cin >> num == false){
		std::cout << "sorry, what you've entered is not a number"
			<< std::endl;
	} else {
		if (num == 0)
		{
			std::cout << "the first number in the fibonacci sequence is zero." << std::endl;
			return 0;
		} if (num == 1)
		{
			std::cout << "The second number in the fibonacci sequence is 1." << std::endl;
			return 0;
		} if (num > 1){
			//TO-DO
			return 0;
		} if (num < 0) {
			std::cout << "Cannot allow a negative number, exiting.......\n";
			return 1;
		}

	}
}
