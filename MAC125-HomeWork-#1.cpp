//ATM 
#include <iostream>
using namespace std;

int main()
{
	int balance = 5000, withdraw, deposit;
	int num;//for user input to choose the feater they want to use
	bool check = true;
		cout << "*******************************************\n";
		cout << "*           welcome to WF bank            *\n";
		cout << "*             Select option:              *\n";
		cout << "*            1. Check Balance             *\n";
		cout << "*            2. Withdraw                  *\n";
		cout << "*            3. Deposit                   *\n";
		cout << "*            4. Exit                      *\n";
		cout << "*******************************************\n";
	do
	{
		cin >> num;
		switch (num)
		{
		case 1: cout << "Your current balance is:$" << balance << endl;
			break;
		case 2: cout << "Enter the amount you want to withdraw:$ ";
			cin >> withdraw;
			if (balance < withdraw)
			{
				cout << "invalid number.";
				break;
			}
			else
				balance -= withdraw;
			cout << "Withdraw $" << withdraw << endl;
			break;
		case 3: cout << "Enter the amount you want to deposit:$ ";
			cin >> deposit;
			balance += deposit;
			cout << "Deposit $" << deposit << endl;
			break;
		case 4: cout << "Thank you for using this system! ";
			check = false;
			break;
		}


	} while (check != false);

}
