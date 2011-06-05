#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	int random = rand();
	int number = random % 101;
	std::cout << "Welcome to Guess My Number!" << std::endl;
	int guess;
	int counter;
	do{
		counter++;
		std::cout << "Please,take a guess: ";
		std::cin >> guess;
		if (guess == number){
			std::cout << "Congratulations! you got it right!";
			std::cout << " after " << counter << " tries";
			return 0;
		} else if (guess > number){
			std::cout << "too high" << std::endl;
		} else {
			std::cout << "too low" << std::endl;
		}
	}while(guess != number);
	return 0;
	
}
