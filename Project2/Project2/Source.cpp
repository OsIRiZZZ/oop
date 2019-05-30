#include <iostream>
using namespace std;
void Exchange(int *t);
int main()
{
	int *List = new int[12];
	cout << "Press ur list: ";
	for (int i = 0; i < 12; i++)
		cin >> List[i];
	Exchange(List);
	cout << "Ur List is: ";
	for (int i = 0; i < 12; i++)
		cout << List[i] << " ";
	return 0;
}



void Exchange(int *List)
{
	for (int i = 0; i < 11; i += 2)
		swap(List[i], List[i + 1]);

}
