//print out all prime number numbers
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "please enter a numbre: ";
	cin >> num;
	int check = 2;

	while (check < num) 
	{
		if (num % check == 0)
		{
			cout << "not prime" << endl;
			//break;
		}
		check++;
	}
	if (check == num) {
		cout << "prime" << endl;
	}
}
