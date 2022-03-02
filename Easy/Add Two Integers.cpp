//*********************************************
// C++ Program to Add Two Integers
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int first_number, second_number, sum;

	cout << "Enter First Number: "; cin >> first_number;
	cout << "Enter Second Number: "; cin >> second_number;

	// sum of two numbers in stored in variable sumOfTwoNumbers
	sum = first_number + second_number;

	// prints sum 
	cout << first_number << " + " << second_number << " = " << sum << endl;
	system("pause");
	return 0;
}