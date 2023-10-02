#pragma once
#include <iostream>
#include <string>
using namespace std;
class Mystring
{
private:
	string str;
public:
	Mystring(string s)
		: str(s) {};

	Mystring operator*(const Mystring other) {
		string result;
		for (char c : str) {
			if (other.str.find(c) != string::npos) {
				result += c;


			}
		}
		return Mystring(result);
	}
	void display() {
		cout << str << endl;
	}

};

