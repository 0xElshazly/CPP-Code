//*********************************************
// C++ Program to check even or odd number.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter any integer number: ";
	cin >> number;
	if (number % 2 == 0){
		cout << number << " is even" << endl;
	}
	else{
		cout << number << " is odd" << endl;
	}
	system("pause");
	return 0;
}