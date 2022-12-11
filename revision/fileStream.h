/*
* File Summary:
* This is the functions file, in this file I will create function(s) that are not part of any class.
*/

#ifndef FILEINPUT_H
#define FILEINPUT_H


#include <fstream>
#include <cassert>
#include <cstdlib>
//included to allow usage of the getline() method
#include <string>

std::ifstream inputFile;
std::ofstream outputFile;
std::string fileName(" ");

void enterFileName() {
	std::cout << "Enter file name: ";
	std::cin >> fileName;
}

/*Prompts User to enter name of file, function them proceeds to search file in directory then
displays all words stored in it*/
void fileInput(std::string fileName) {
	//conditional prompt to enter file name incase fileName was entered in fileOput method.
	if (fileName == " ") {
		enterFileName();
	}

	inputFile.open(fileName);
	while (inputFile.fail()) {
		std::cerr << "Error: file not found!\nDo you wish to try again?(y/n) ";
		char proceed;
		std::cin >> proceed;

		if (proceed == 'n' || proceed == 'N') {
			exit(2);
		}
		else if (proceed == 'y' || proceed == 'Y') {
			enterFileName();
		}
		else {
			std::cerr << "Invalid input!\n Exiting program";
			exit(1);
		}
	}

	while (!inputFile.eof()) {
		std::string tempInput;
		inputFile >> tempInput;
		std::cout << tempInput << std::endl;
	}

	inputFile.close();
}

/*when user wants to output data to a file*/
void fileOutput() {
	enterFileName();

	//creates new file with specified file name if original file was not found.
	outputFile.open(fileName, std::ios::app);
	std::string data;
	std::cout << "\nSave to file: ";
	std::cin >> data;
	
	outputFile << data << std::endl;
	{
		char proceed;
		std::cout << "do you wish to see if data was stored?(y/n)";
		std::cin >> proceed;

		if (proceed == 'n' || proceed == 'N') {
			exit(2);
		}
		else if (proceed == 'y' || proceed == 'Y') {
			std::cout << "WARNING! All previously stored data will also be displayed\n\n";
			fileInput(fileName);
		}
		else {
			std::cerr << "Invalid input!\n Exiting program";
			exit(1);
		}
	}

	outputFile.close();
}

#endif // !FILEINPUT_H
