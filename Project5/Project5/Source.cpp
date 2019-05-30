#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;


void Bubble(int *,int );
void Bubble(double *,int );


void Choice(int *,int );
void Choice(double *,int );


void Put(int *,int );
void Put(double *,int );

int main()
{
	srand(time(NULL));
	int n;
	cin >> n;
	int *A = new int[n];
	for (int j = 0; j < n; j++)
	{
		A[j] = rand() % 100 - 50;
	}
	
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";


	cout << endl;
	
	
	Choice(A, n);


	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	return 0;
}

void Bubble(int *A,int n)
{
	int k = 0;
	for (int i = 0; i < n / 2 + 1; i++)
	{
		for (int j = 0; j < n - 1 - k; j++)
			if (A[j + 1] < A[j])
				swap(A[j], A[j + 1]);
		k++;
	}
}



void Bubble(double *A, int n)
{
	int k = 0;
	for (int i = 0; i < n / 2 + 1; i++)
	{
		for (int j = 0; j < n - 1 - k; j++)
			if (A[j + 1] < A[j])
				swap(A[j], A[j + 1]);
		k++;
	}
}


void Choice(int *A,int n)
{
	int min;
	int index=0;
	for (int i = 0; i < n; i++)
	{
		min = 65535;
		for (int j = i; j < n; j++)
			if (A[j] < min)
			{
				min = A[j];
				index = j;
			}
		swap(A[i], A[index]);
	}
}


void Choice(double *A, int n)
{
	int min;
	int index;
	for (int i = 0; i < n; i++)
	{
		min = 65535;
		for (int j = i; j < n; j++)
			if (A[j] < min)
			{
				min = A[j];
				index = j;
			}
		swap(A[i], A[index]);
	}
}


