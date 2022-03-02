//*********************************************
// C++ Program to check positive or negative number.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter any integer number: ";
	cin >> number;
	if (number >= 0){
		cout << number << " is positive" << endl;
	}
	else{
		cout << number << " is negative" << endl;
	}
	system("pause");
	return 0;
}