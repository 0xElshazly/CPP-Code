//*************************************************************************
// C++ Program to Find Size of Data Type in Your System
//*************************************************************************
#include <iostream>
using namespace std;
int main(){
	cout << "Size of char: " << sizeof(char) << " byte" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Size of short: " << sizeof(short) << " byte" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes" << endl;
	cout << "Size of unsigned: " << sizeof(unsigned) << " bytes" << endl;
	system("pause");
	return 0;
}