//*********************************************
// C++ Program to check Student Grade.
//*********************************************
#include <iostream>
using namespace std;
int main(){
	int grade;
	cout << "Enter student grade: ";
	cin >> grade;
	if (grade >= 90){
		cout << "A" << endl;
	}
	else if (grade >= 80){
		cout << "B" << endl;
	}
	else if (grade >= 70){
		cout << "C" << endl;
	}
	else if (grade >= 60){
		cout << "D" << endl;
	}
	else{
		cout << "F" << endl;
	}
	system("pause");
	return 0;
}