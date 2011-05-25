#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


int main()
{
	srand(time(0));
	int random = rand();
	std::string words[5][2] = {
	{"monitor","You're currently seeing this game through this"},
	{"speaker","This one makes you hear sounds"},
	{"keyboard","This is the standard input"},
	{"mouse","This controls the pointer"},
	{"printer","You can print things using this"}
	};
	int index = random % 5;
	std::string word = words[index][0];
	std::string hint = words[index][1];
	std::string jumbled = word;
	int length = jumbled.size();
	for(int i=0;i<length;i++){
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumbled[index1];
		jumbled[index1] = jumbled[index2];
		jumbled[index2] = temp;
	}

	std::cout << "Welcome to word jumble!\n" << std::endl;
	std::cout << "Type \"hint\" for a hint" << std::endl;
	std::cout << "or \"quit\" to quit\n\n";
	std::string guess;
	while((guess != word) && (guess != "quit"))
	{
		if(guess == "hint"){
			std::cout << hint << std::endl;
		} else {
			std::cout << "Sorry,that's not it" << std::endl;
		}
		std::cout << "the word is : " << jumbled << std::endl;
		std::cout << "Your guess: ";
		std::cin >> guess;
		if(guess == word){
			std::cout << "Congratulations! you got it right this time" \
			<< std::endl;
			return 0;
		}
	}

}
