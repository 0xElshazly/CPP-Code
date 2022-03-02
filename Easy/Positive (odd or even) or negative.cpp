//*********************************************
// C++ Program to check positive (odd or even) or negative number.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter any integer number: ";
	cin >> number;
	if (number >= 0){
		cout << number << " is positive" << endl;
		if (number % 2 == 0){
			cout << number << " is even" << endl;
		}
		else{
			cout << number << " is odd" << endl;
		}
	}
	else{
		cout << number << " is negative" << endl;
	}
	system("pause");
	return 0;
}