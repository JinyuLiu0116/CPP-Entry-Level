/*#include <iostream>
using namespace std;
bool pal(int);

int main()
{
	int num;
	cout << "Enter a palindrome number: ";
	cin >> num;
	if (pal(num))
		cout << num << " is palindrome.";
	else
		cout << num << " is not palindrom.";

}
bool pal(int num) {
	int digit, result = 0;
	int palNum = num;

	if (num < 0) 
		return false;

	while (num != 0)
	{
		digit = num % 10;
		result = result * 10 + digit;
		num /= 10;
	}
	if (result == palNum)
	{
		return true;
	}
	return false;
}*/

/*#include <iostream>
#include <ctime>
#include <array>x
using namespace std;

int main()
{
	srand(time(NULL));
	int scores[10], sum=0;

	for (int index = 0; index < 10; index++)//initialize the array
	{
		scores[index] = rand() % 101;
		sum += scores[index];
	}
	for (int i = 0; i < 10; i++)// show assigned scores for each element of the array
	{
		cout << "Score of student #" << i + 1 << " is: " << scores[i] <<'\n';
	}
	cout << "Average: " << sum / 10.0;// get the average
}*/

#include <iostream>
#include <array>
using namespace std;

int main()
{
	int scores[50], persentage;//declare array with size 50.

	for (int index = 0; index < 50; index++)// inisialize array with random number 10-75.
	{
		scores[index] = (rand() % 66) + 10;
		persentage = (scores[index] / 75.0) * 100;
		cout << "The persentage for student #" << index + 1 << " is: " << persentage << '\n';
		//cout << scores[index] << endl;
	}


}

