//*********************************************
// C++ Prgram to find the area of rectangle.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	// input length and width of rectangle.
	int length, width;
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter width of rectangle: ";
	cin >> width;
	// calculate the area of rectangle.
	cout << "Area of rectangle is: " << length*width << endl;
	system("pause");
	return 0;
}