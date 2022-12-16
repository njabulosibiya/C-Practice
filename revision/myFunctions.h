/*
* Files Summary:
* FIle surves as primary residence for all revision based functions.
*/

#ifndef MYFUNCTIONS_H
#include <vector>

struct Person {
	std::string name = " ";
	std::string middleName = " ";
	std::string surName = " ";
	int age = 0;
};
/**/

void vectorRevision() {
	std::vector<int> vec1;

	unsigned int value(0);
	std::cout << "how many numbers do you wanna enter? ";
	std::cin >> value;

	{
		unsigned int counter(0), data(0);
		std::cout << "Enter...\n";
		for (short int i(0); i < value; i++) {
			std::cout << "Value " << ++counter << ": ";
			std::cin >> data;
			vec1.push_back(data);
		}

		std::cout << "The entered numbers are: ";
		for (int i : vec1)
			std::cout << i << " ";
	}
}

/*template that prints entered vhar, number, string both infinitly and or for a random number of lines*/

void pointersAndDynamicArrays() {

}


void addPeople() {
	int numOfPeeps(0);
	std::cout << "How many peeps u want? ";
	std::cin >> numOfPeeps;
	std::cout << "Nvm, doesn't matter\n\n" << std::endl;

	Person people[5];
	int counter(1);
	for (auto i : people) {
		std::cout << "Name: ";
		std::cin >> people[counter].name;

		std::cout << "\nsurname: ";
		std::cin >> people[counter].surName;

		std::cout << "\nmiddle name: ";
		std::cin >> people[counter].middleName;

		std::cout << "\nage: ";
		std::cin >> people[counter].age;
	}


}
#endif // !MYFUNCTIONS_H
