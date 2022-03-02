//*********************************************
// C++ Program to check Student Grade in range.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int grade;
	cout << "Enter student grade: ";
	cin >> grade;
	if (grade >= 90 && grade <= 100){
		cout << "A" << endl;
	}
	else if (grade >= 80 && grade < 90){
		cout << "B" << endl;
	}
	else if (grade >= 70 && grade < 80){
		cout << "C" << endl;
	}
	else if (grade >= 60 && grade < 70){
		cout << "D" << endl;
	}
	else if (grade > 100 || grade < 0){
		cout << "Out of range" << endl;
	}
	else{
		cout << "F" << endl;
	}
	system("pause");
	return 0;
}