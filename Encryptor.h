#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <windows.h>
#include <direct.h>
#include <filesystem>
using namespace std;


class Encryptor {
public:
	Encryptor();
	virtual void stringIn(string& uString);
	virtual string stringOut();
	virtual void fileIn(string& uFile);
	virtual void fileOut(string& uFile);
	virtual void encrypt() {}
	virtual void keyIn() {}
	virtual void type(const char* msg);
	virtual void directory();
protected:
	string key;
	string preString;
	string postString;
};