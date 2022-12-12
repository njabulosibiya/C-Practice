/*
* Files Summary:
* FIle surves as primary residence for all revision based functions.
*/

#ifndef MYFUNCTIONS_H
#include <vector>


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

#endif // !MYFUNCTIONS_H
