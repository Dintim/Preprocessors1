//#define MY_INTEGER

#include <iostream>
#include "function.h"

using namespace std;


int main() {
	int a[10];
	double b[8];
	char c[5];

#ifdef MY_INTEGER
	fillInt(a, 10);
	printInt(a, 10);
#endif

#ifdef MY_DOUBLE
	fillDouble(b, 8);
	printDouble(b, 8);
#endif

#ifdef MY_CHAR
	fillChar(c, 5);
	printChar(c, 5);
#endif



	system("pause");
	return 0;
}