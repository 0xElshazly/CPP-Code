//*********************************************
// C++ Prgram to find the average of 3 numbers.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	// input length and width of rectangle.
	float num_1, num_2, num_3;
	cout << "Enter number 1: "; cin >> num_1;
	cout << "Enter number 2: "; cin >> num_2;
	cout << "Enter number 3: "; cin >> num_3;
	// calculate the average.
	cout << "Average is: " << (num_1 + num_2 + num_3) / 3 << endl;
	system("pause");
	return 0;
}