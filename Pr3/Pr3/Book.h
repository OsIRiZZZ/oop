#include <iostream>
#include <vector>
#include <string>
#include "pch.h"

using namespace std;


#ifndef BOOK_H
#define BOOK_H
class Books
{
private:
	string fullautrhorname;
	string bookname;
	string izd;
	int yearofprod;
	int countp;
public:
	Books();
	~Books();
	void setBookinfo();
	void setNameAuth();
	string getNameAuth();
	void setBookN();
	string getBookN();
	void setIzd();
	string getIzd();
	void setYear();
	int getYear();
	void setCountp();
	int getCountp();
	const Books &operator =(const Books &);
	friend bool compare(const Books&, const Books&);
	friend ostream &operator <<(ostream &, const Books &);
};
bool compare(const Books&, const Books&);
ostream &operator <<(ostream &, const Books&);
#endif
