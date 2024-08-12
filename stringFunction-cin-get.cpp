#include <iostream>
#include <algorithm>
using namespace std;

void newLine();
void getInt(int& number);
int main()
{
	int n;

	getInt(n);
	cout << "Final value read in = " << n << endl
		<< "End of demostration.\n";
}
void newLine() 
{
	char symbol;
	do {
		cin.get(symbol);
	} while (symbol != '\n');
}
void getInt(int& number) 
{
	char ans;
	do {
		cout << "Enter input number: ";
		cin >> number;
		cout << "Your entered " << number
			<< " is that correct? (Yes/No): ";
		cin >> ans;
		newLine();
	} while (ans == 'N' || ans == 'n');
}
