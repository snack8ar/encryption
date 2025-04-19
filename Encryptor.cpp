#include"Encryptor.h"


Encryptor::Encryptor(){
	key = "";
};
void Encryptor::stringIn(string& uString) {
	preString = uString;	
};
string Encryptor::stringOut() {
	postString = preString;
	return postString;
};
void Encryptor::fileIn(string& uFile) {
	


	string path;
	type("Enter File Path: ");
	cin >> path;
	ifstream inputFile(uFile);
	if (!inputFile) {
		cerr << "Error Opening File.\n";
	}
}
void Encryptor::fileOut(string& uFile) {
	string outputFileName = uFile.substr(0, uFile.find_last_of('.')) + "-encrypted.txt";
	ofstream outputFile(outputFileName);
	if (!outputFile)
		cerr << "Error Opening File.\n";
};
void Encryptor::type(const char* msg) {
	while (*msg) {
		cout << *msg++;
		Sleep(10);
	}
};
void Encryptor::directory() {
	string newDirectory;
	type("Enter");
}
