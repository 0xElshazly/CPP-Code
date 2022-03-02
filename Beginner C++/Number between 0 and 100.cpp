//*********************************************
// C++ Program to check number between 0 and 100.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number to check: ";
	cin >> number;
	if (number >= 0 && number <= 100){
		cout << number << " is between 0 and 100" << endl;
	}
	else{
		cout << number << " is not in range" << endl;
	}
	system("pause");
	return 0;
}