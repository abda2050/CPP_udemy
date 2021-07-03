#include <iostream>
using namespace std;

int main()
{
	int n, i, sum = 0;
	cout << "Enter n\n";
	cin >> n;

	for (i=1; i<= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	
	if (2 * n == sum)
	{
		cout << "Perfect number\n";
	}
	else
	{
		cout << "Not perfect number\n";
	}

	return 0;
}
