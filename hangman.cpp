#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

std::vector<std::string> populate_word_list()
{
    std::vector<std::string> words;
    words.push_back("purse");
	words.push_back("crowbar");
	words.push_back("terminal");
	words.push_back("river");
	words.push_back("object");
	words.push_back("rocket");
	words.push_back("anthem");
	words.push_back("voice");
	words.push_back("lounge");
	words.push_back("theory");
	std::random_shuffle(words.begin(),words.end());
    return words;
}


int main()
{
	srand(time(0));
	std::vector<char> wrong;
    std::vector<std::string> words = populate_word_list();
	std::vector<std::string>::const_iterator iterator = words.begin();
	std::string word = *iterator;
	std::cout << "\nWelcome to hangman!\n\n";
	std::string word_line(word.size(),'_');
	std::cout << "The word is : " << word_line << "\n\n";
	for(int i = 0 ; i < 8;){
		std::cout << "please,enter a character: ";
		char input;
		std::cin >> input;
		if(word.find(input) == std::string::npos){
			std::cout << "\n\nsorry,that's a wrong guess\n\n";
			wrong.push_back(input);
			std::cout << "used characters: ";
			std::vector<char>::const_iterator uiterator;
				for(uiterator = wrong.begin();uiterator != wrong.end();uiterator++){
					std::cout << *uiterator << ", ";
				}
				i++;
				if(i != 8){
					std::cout << "\n\nThe word is : " << word_line; 
					std::cout << "\n\nWarning: you've got " << 8-i << " tries left\n\n";
					continue;
				} else {
					std::cout << "\n\nWe're sorry,but you've lost!\n\n";
					std::cout << "The word was : " << word << std::endl;
				}
		} else if(word_line.find(input) != std::string::npos){
			std::cout << "\n\nYou've already used this word,try another one.\n\n";
			continue;
		}
		else {
			std::cout << "that's right!\n\n" << std::endl;
			std::string character(1,input);
			word_line[word.find(input)] = input;
			if(word_line == word){
				std::cout << "the word is : " << word << std::endl;
				std::cout << "Congratulations!,you've got it all right!.";
				std::cout << "\n\nThank you for playing hangman.\n";
				i = 8;
			} else{
				std::cout << "The word is : " << word_line << "\n\n";
				continue;
			}
		}
	}
}
