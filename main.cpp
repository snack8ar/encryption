#include"Encryptor.h"

using namespace std;

void type(const string& msg);

int main() {
	Encryptor myE;
	string typeChoice;
	string fileName;

	type("Would you like to encrypt a 'file' or 'message'?");
	cin >> typeChoice;
	if (typeChoice == "file") {
		type("Enter your file name: ");
		cin >> fileName;
		myE.fileIn(fileName);
	}
}
void type(const string& msg) {
	for(char c : msg) {
		cout << c;
		Sleep(10);
	}
}