#ifndef CLASSREVISION_H
#define CLASSREVISION_H
#include <string>

class Revision {
public:
	/*Default constructor*/
	Revision();
	/*parameter initialization construtor*/
	Revision();
	/*mutators*/

	/**/

	/*accessors*/
	void testConst(const int& i);

	/**/

private:
	std::string name;
};


#endif // !CLASSREVISION_H