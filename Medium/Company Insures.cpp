//*********************************************
// C++ Program to A company insures for its employee: 
// Employee is married. OR
// Employee is an single male above 30 years.  OR
// Employee is an single female above 25 years.  OR
//*********************************************
#include <iostream>
#include <string>
using namespace std;
int main(){
	cout << "Chose(Married - Single - Male - Female)" << endl;
	cout << "---------------------------------------" << endl;
	int age;
	string gender, status;
	cout << "Enter your age: "; cin >> age;
	cout << "Enter your Marital Status: "; cin >> status;
	cout << "Enter your Gender: "; cin >> gender;
	if (status == "Married" || (status == "Single" && gender == "Male"&&age > 30)
		|| (status == "Single" && gender == "Female"&&age > 25)){
		cout << "You will get insurance" << endl;
	}
	else{
		cout << "You will not get insurance" << endl;
	}
	system("pause");
	return 0;
}