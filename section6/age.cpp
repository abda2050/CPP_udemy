#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter age \n";
	cin >> age;

	if (age < 12 ||  age < 50)
	{
		cout << "ELigible \n";
	}
	else
	{
		cout << "Not Eligible \n";
	}
	
	return 0;
}
