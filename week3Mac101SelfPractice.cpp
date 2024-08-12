//1. Write a program to get score and total from user and print out percentage

/*#include <iostream>
using namespace std;

int main() 
{
	float score, total, percentage;
	cout << "Please enter your score: \n";
	cin >> score;
	cout << "Please enter your total: \n";
	cin >> total;
	percentage = (score / total) * 100;
	cout << "Your percentage is: " << percentage << "%\n";

}
*/

//2. Write a program to get length from user and print area of rectangle, square

/*#include <iostream>
using namespace std;

int main()
{
	float len1, len2, area;
	cout << "Please enter the first length: \n";
	cin >> len1;
	cout << "Please enter the second length: \n";
	cin >> len2;
	area = len1 * len2;
	if (len1 == len2)
	{
		cout << "The area of the square is: " << area << endl;
	}
	else
	{
		cout << "The area of the rectangle is: " << area << endl;
	}

}
*/

//3. check if x and y are divisible and x is divisible by 3.

/* #include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Please enter x: \n";
	cin >> x;
	cout << "Please enter y: \n";
	cin >> y;

	if (x % y == 0)
	{
		if (x % 3 == 0)
		{
			cout << x << " is devisible by " << y << " and 3.\n";
		}
		else
		{
			cout << x << " is divisible by " << y << ", but not 3.\n";
		}
	}
	else if (x % y != 0 && x % 3 == 0)
	{ 
		cout << x << " is not divisible by " << y << ", but 3.\n";
	}
	else
	{
		cout << x << " is not divisible by " << y << " and 3.\n";
	}
}
*/

