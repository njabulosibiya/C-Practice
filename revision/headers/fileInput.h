#ifndef FILEINPUT_H
#define FILEINPUT_H


#include <fstream>
#include <cassert>
#include <cstdlib>

/*Prompts User to enter anem of file, function them proceeds to search file in directory then
displays all words stored in it*/
void fileData(std::ifstream& fileInput) {
	std::string fileName("");
	std::cout << "ENter file name: ";
	std::cin >> fileName;

	fileInput.open(fileName);
	while (fileInput.fail()) {
		std::cerr << "Error: file not found!\nDo you wish to try again?(y/n) ";
		char proceed;
		std::cin >> proceed;

		if (proceed == 'n' || proceed == 'N') {
			exit(2);
		}
		else if (proceed == 'y' || proceed == 'Y') {
			std::cout << "Enter file name: ";
			std::cin >> fileName;
		}
		else {
			std::cerr << "Invalid input\n";
			exit(1);
		}
	}
}

#endif // !FILEINPUT_H
