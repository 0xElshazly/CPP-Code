//*******************************************************
// C++ Program to Find Largest Number Among Three Numbers
//*******************************************************
#include <iostream>
#include <string>
using namespace std;
int main(){
	cout << "Find Largest Number Among Three Numbers!\n" << endl;
	int n1, n2, n3;
	cout << "Enter Number 1: "; cin >> n1;
	cout << "Enter Number 2: "; cin >> n2;
	cout << "Enter Number 3: "; cin >> n3;
	if ((n1 > n2) && (n1 > n3)){
		cout << "Largest number: " << n1 << endl;
	}
	else if ((n2 > n1) && (n2 > n3)){
		cout << "Largest number: " << n2 << endl;
	}
	else{
		cout << "Largest number: " << n3 << endl;
	}
	cout << "\n";
	system("pause");
	return 0;
}