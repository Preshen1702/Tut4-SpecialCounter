#include "SpecialCounter.h"
#include<iostream>

using namespace std;

int main()
{
	SpecialCounter C;
	++C;
	cout << "Counts equals = " << C.V() << endl;
	--C;
	cout << "Counts equals = " << C.V() << endl;
	C.stepInc(3);
	cout << "Counts equals = " << C.V() << endl;
	C.stepDec(2);
	cout << "Counts equals = " << C.V() << endl;
	C.Begin(20);
	cout << "Counts equals = " << C.V() << endl;
	C.End(200);
	cout << "Counts equals = " << C.V() << endl;

	return 1;
}