//*********************************************
// C++ Program to Find Quotient and Remainder
//*********************************************
#include <iostream>
using namespace std;
int main(){
	float divisor, dividend, quotient, remainder;

	cout << "Enter dividend: ";
	cin >> dividend;

	cout << "Enter divisor: ";
	cin >> divisor;

	quotient = dividend / divisor;
	remainder = (int)dividend % (int)divisor;

	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	system("pause");
	return 0;
}