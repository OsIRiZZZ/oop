#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Book.h"

using namespace std;

Books::Books()
{

}

Books::~Books()
{

}

void Books::setBookinfo()
{
	Books::setNameAuth();
	Books::setBookN();
	Books::setIzd();
	Books::setCountp();
	Books::setYear();
}

void Books::setNameAuth()
{
	cout << "Press Authors name: ";
	cin >> fullautrhorname;
	cout << endl;
}

string Books::getNameAuth()
{
	return string(fullautrhorname);
}

void Books::setBookN()
{
	cout << "Press book's name: ";
	cin >> bookname;
	cout << endl;
}

string Books::getBookN()
{
	return string(bookname);
}

void Books::setIzd()
{
	cout << "Press izdatelstvo name: ";
	cin >> izd;
	cout << endl;
}

string Books::getIzd()
{
	return string(izd);
}

void Books::setYear()
{
	cout << "Press the year book was produced: ";
	cin >> yearofprod;
	cout << endl;

}

int Books::getYear()
{
	return yearofprod;
}

void Books::setCountp()
{
	cout << "Press the count of pages: ";
	cin >> countp;
	cout << endl;
}

int Books::getCountp()
{
	return countp;
}

const Books & Books::operator=(const Books & A)
{
	this->bookname = A.bookname;
	this->fullautrhorname = A.fullautrhorname;
	this->izd = A.izd;
	this->countp = A.countp;
	this->yearofprod = A.yearofprod;
	return *this;
}


bool compare(const Books & A, const Books & B)
{
	return (A.bookname < B.bookname);
}

ostream & operator<<(ostream &stream, const Books & A)
{
	stream << "Book:(" << A.fullautrhorname << "," << A.bookname << "," << A.izd << "," << A.countp << "," << A.yearofprod << ")" << endl;
	return stream;

}
