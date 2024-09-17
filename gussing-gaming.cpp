#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int num, guess;
	num = rand() % 20 + 1;
	do {
		cout << "Enter your number: ";
		cin >> guess;
		if (guess == num)
		{
			break;
		}
		 else if (guess < num)
		{
			cout << "Your number is too small.\n";
			//cout << "Enter a number: ";
			//cin >> guess;
		}
		else
		{
			cout << "Your number is too big.\n";
			//cout << "Enter a number: ";
			//cin >> guess;
		}
	} while (guess != num);
	cout << "You win!!";
}
