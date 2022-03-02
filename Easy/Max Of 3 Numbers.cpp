//*********************************************
// C++ Prgram to find the max of 3 numbers.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int x, y, z;
	cout << "Enter Number one: "; cin >> x;
	cout << "Enter Number Two: "; cin >> y;
	cout << "Enter Number Three: "; cin >> z;
	if (x > y && x > z){
		cout << "Max Number is: " << x << endl;
	}
	else if (y > x && y > z){
		cout << "Max Number is: " << y << endl;
	}
	else{
		cout << "Max Number is: " << z << endl;
	}
	system("pause");
	return 0;
}