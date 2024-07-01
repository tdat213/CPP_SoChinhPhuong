#include <iostream>
using namespace std;

bool checkSNT(int so);

int main()
{
	int so;
	cout << "Nhap n: ";
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		if (checkSNT(i));
		cout << i << " ";
	}
}

bool checkSNT(int so) {
	if ((int)sqrt(so) == sqrt(so)) return true;
	return false;
}
	



