#include <iostream>
using namespace std;

int main()
{
	int salary;
	float allowances, deductions, netSalary;

	cout << "Enter Basic Salary \n";
	cin >> salary;

	cout << "Enter percentage of deductions \n";
	cin >> deductions;

	cout << "Enter percentage of allowances \n";
	cin >> allowances;

	netSalary = (float) salary + salary * (allowances/100) - salary * (deductions/100);
	cout << netSalary << endl;

	return 0;

}
	
