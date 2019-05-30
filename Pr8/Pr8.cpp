#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inp("in.txt");
	string input = "";
	while (!inp.eof()) {
		inp >> input;
		cout << input << endl;
	}
	inp.close();
	return 0;
}