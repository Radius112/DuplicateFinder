#include <iostream>

int main() {
	int option;
	do {
		std::cout << "DUPLICATE FINDER\n";
		std::cout << "1. WORDS\n";
		std::cout << "2. NUMBERS\n";
		std::cin >> option;
		system("CLS");
		if (option == 1) {
			int arsize = 0;
			std::string array[20];
			std::cout << "How many words do you want to enter? [20 MAX]" << "\n";
			std::cin >> arsize;
			std::cout << "enter your words: \n";
			for (int i = 0; i < arsize; i++) {
				std::cin >> array[i];
			}
			std::cout << "Duplicate words are: \n";
			for (int i = 0; i < arsize; i++) {
				for (int j = i ++; j < arsize; j++) {
					if (array[i] == array[j]) {
						std::cout << array[j] << "\n";
					}
				}
			}
		}
		if (option == 2) {
			int arsize = 0;
			std::string array[20];
			std::cout << "How many numbers do you want to enter? [20 MAX]" << "\n";
			std::cin >> arsize;
			std::cout << "enter your numbers: \n";
			for (int i = 0; i < arsize; i++) {
				std::cin >> array[i];
			}   
			std::cout << "Duplicate numbers are: \n";
			for (int i = 0; i < arsize; i++) {
				for (int j = i ++; j < arsize; j++) {
					if (array[i] == array[j]) {
						std::cout << array[j] << "\n";
					}
				}
			}
		}
		else {
			std::cout << "ERROR [WRONG INPUT]\n";
		}
	} while (option != 4);
}