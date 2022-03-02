//*********************************************
// C++ Program to check equality of 2 number.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int number_1, number_2;
	cout << "Enter number 1: "; cin >> number_1;
	cout << "Enter number 2: "; cin >> number_2;
	if (number_1 == number_2){
		cout << "Both number are equal." << endl;
	}
	else if (number_1 > number_2){
		cout << "Number one is greater than number two." << endl;
	}
	else{
		cout << "Number two is greater than number two." << endl;
	}
	system("pause");
	return 0;
}