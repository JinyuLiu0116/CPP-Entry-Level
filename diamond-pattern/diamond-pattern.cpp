#include <iostream>
using namespace std;


int main()
{
	int userInput;
	cout << "Enter a number:";
	cin >> userInput;
	if (userInput % 2 == 0)
		userInput--;

	for (int i = 1; i <= userInput; i += 2)
	{
		for (int j = userInput-i; j > 0; j-=2)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << '\n';
	}
	for (int i = 3; i <= userInput; i += 2)
	{
		for (int j = 1; j <= i-2; j += 2)
			cout << " ";
		for (int j = 1; j <= (userInput+1)-i; j++)
			cout << "*";
		cout << '\n';
	}


}