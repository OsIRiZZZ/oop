
#include "pch.h"
#include <iostream>
#include "Book.h"
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<Books> Libr;
	vector<Books> Zap;
	int n;
	cout << "Press Books count: ";
	cin >> n;
	Libr.resize(n);
	Zap.resize(Libr.size());
	for (int i = 0; i < Libr.size(); i++)
		Libr[i].setBookinfo();
	for (int i = 0; i < Libr.size(); i++)
		Zap[i] = Libr[i];
	std::sort(Libr.begin(), Libr.end(), compare);
	for (auto iter = Zap.begin(); iter < Zap.end(); ++iter)
		cout << *iter;
	cout << endl;
	for (auto iter = Libr.begin(); iter < Libr.end(); ++iter)
		cout << *iter;
	return 0;
}


