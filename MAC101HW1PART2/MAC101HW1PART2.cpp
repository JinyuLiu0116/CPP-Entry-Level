#include <iostream>
using namespace std;

int main()
{
	int length1, length2;
	cout << "Please enter the first length: " << endl;
	cin >> length1;
	cout << "Your first length is: " << length1 << endl;

	cout << "please enter the second length: " << endl;
	cin >> length2;
	cout << "Your second length is: " << length2 << endl;

	int area = length1 * length2;

	if (length1 == length2)
	{
		cout << "The area of the square is: " << area << endl;
	}
	else
	{
		cout << "The are of the rectangle is: " << area << endl;
	}
	return 0;
}