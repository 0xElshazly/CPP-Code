//*******************************************************************
// C++ Program to Check Whether a character is Vowel or Consonant.
//*******************************************************************
#include <iostream>
#include <string>
using namespace std;
int main(){
	cout << "Check Whether a character is Vowel or Consonant!" << endl;
	char c;
	cout << "Enter a character: ";
	cin >> c;
	bool isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	bool isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (!isalpha(c)){
		cout << "Error!Non - alphabetic character." << endl;
	}
	else if (isLowercaseVowel || isUppercaseVowel){
		cout << c << " is a vowel." << endl;
	}
	else{
		cout << c << " is a consonant." << endl;
	}
	system("pause");
	return 0;
}