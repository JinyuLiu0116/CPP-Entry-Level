// 1)	Write the program to get input from user and print numbers from 1 till the input.

/*#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Please enter a number: \n";
	cin >> number;
	if (number == 0)
	{
		cout << "You have entered 0.\n";
	}
	else if (number < 0)
	{
		int count1 = -1;
		while (count1 >= number)
		{
			cout << count1 << " " << endl;
			count1--;
		}
	}
	else
	{
		int count2 = 1;
		while (count2 <= number)
		{
			cout << count2 << " " << endl;
			count2++;
		}
	}
}*/

// 2) 	Write a program to get start and stop values from user and print all numbers from start till stop.

/*#include <iostream>
using namespace std;

int main()
{
	int startNum, stopNum;
	cout << "Please enter your start number and stop number: \n";
	cin >> startNum >> stopNum;

	if (startNum == stopNum) {
		cout << "You have entered same numbers.\n";
	}
	else if (startNum < stopNum) {
		while (startNum < stopNum + 1) {
			cout << startNum << " " << endl;
			startNum++;
		}
			}
	else {
		while (startNum > stopNum-1)
		{
			cout << startNum << " " << endl;
			startNum--;
		}

	}
}*/

//3)  Print all lowercase alphabets from a to z

/*#include <iostream>
using namespace std;

int main() 
{
	char alph = 'a';
	
	while (alph <= 'z') {
		cout << alph << " " << endl;
		alph++;
	}
}
*/

//•	Print all numbers between start and stop which are "Odd" "Multiples of 3" "Even and multiples of 5"
#include <iostream>
using namespace std;

int main()
{
	int starN, stopN;
	cout << "Please enter a start number and a stop number: ";
	cin >> starN >> stopN;
	if (starN == stopN) {
		cout << "The numbers you have entered are same.\n";
	}
	else if (starN < stopN) {
	    int print=starN+1;
		while (print < stopN) {
			if (print % 2 != 0) {
				cout << print << " " << endl;
						}
			else if (print % 3 == 0) {
				cout << print << " " << endl;
			}
			else if (print % 2 == 0 && print % 5 == 0) {
				cout << print << " " << endl;
			}
			print++;
		}
		
	}
}
