#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter 3 numbers\n";
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		cout << a << " is greater\n";
	}
       	else if (b > c)
	{
		cout << b << " is greater\n";
	} 
	else
	{
		cout << c << " is greater\n";
	}

	return 0;
}
