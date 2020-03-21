#include<iostream>


using namespace std;

int main() {
	char input;
	string name;
	string inputString;
	bool continueOn = true;
	while (continueOn == true) {
		cout << "Your name is...\n";
		cin >> name;
		cout << "Is your name " << name << "? Yes or no. \n";
		cin >> inputString;
		if (inputString == "Yes") {
			cout << "Okay, let's continue.\n";
			continueOn = false;
		}
		else if (inputString == "no") {
			cout << "Okay, let's try that again.\n";
		}
	}
	cout << "You are on platform 9 and three quarters waiting for the train to arrive.\n";
	continueOn = true;
	while (continueOn == true) {
		cout << "Do you A.) look to your right B.) look to your left or C.) Take out a book to read.\n";
		if (inputString == "A") {
			cout << "To your right is a boy with shaggy black hair and glasses. \n";
			cout << "Do you A.) Talk to him or B.) "
		}
	}
	

	return 0;
}