#include "Mystring.h"
#include <iostream>
using namespace std;
int main()
{
	Mystring s1("sqcg");
	Mystring s2("rqfas3+4");
	Mystring intersection = s1 * s2;
	intersection.display();

	return 0;
}

