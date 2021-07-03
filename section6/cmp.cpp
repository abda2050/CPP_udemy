#include <iostream>
using namespace std;

int main()
{
	int hour;
	cout << "Enter hours \n";
	cin >> hour;
	if(hour >= 9 && hour <= 18)
	{
		cout << "Working\n";
	}
	else
       	{
		cout << "Liesure\n";
	}	

	return 0;
}
