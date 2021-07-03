#include <iostream>
using namespace std;

int main()
{
	string str;
	cout << "May I know your name\n ";
	getline(cin, str);
	cout << "Welcome " << str << "\n";
	return 0;
}
