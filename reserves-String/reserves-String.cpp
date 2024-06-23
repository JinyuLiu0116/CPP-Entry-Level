#include <iostream>
#include <string>
using namespace std;

int main()
{
	string reverse;
	string newMassege;
	string temp;
	cout << "Enter a massege to reverse:";
	getline(cin, reverse);

	for (int i = reverse.length() - 1; i >= 0; i--)
	{
		temp = reverse[i];
		newMassege.append(temp);
	}
	cout << newMassege;
}