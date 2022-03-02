//*********************************************
// C++ Program to Swap Two Numbers
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int a, b, temp;
	cout << "Enter First Number: "; cin >> a;
	cout << "Enter Second Number: "; cin >> b;
	cout << "\nBefore swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "\nAfter swapping." << endl;
	cout << "a = " << a << ", b = " << b << endl;
	system("pause");
	return 0;
}