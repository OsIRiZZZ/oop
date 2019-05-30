#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	double a, b, n, m;
	cout << "Input variables a and b: ";
	cin >> a >> b;
	if (a >= b)
	{
		n = pow(a - b, 1.0 / 3);
	}
	else
		if (sin(a*b) == 0)
		{
			cout << "Error";
			return 0;
		}
		else
			n = pow(a, 2) + (a - b) / sin(a*b);
	if (n < b)
		if (b == 0 || pow((pow(sin(a), 2) - cos(n)), 2) < 0)
		{
			cout << "Error";
			return 0;
		}
		else
			m = (n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n));
	if (n == b)
		m = pow(b, 2) + tan(n*a);
	if (n > b)
		m = pow(b, 3) + n * pow(a, 2);
	return 0;
}