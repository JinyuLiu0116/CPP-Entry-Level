#include <iostream>
using namespace std;

int main()
{
	float score, total;
	cout << "Plesae enter your score: " << endl;
	cin >> score;
	cout << "Your score is: " << score << endl;

	cout << "Please enter your total score: " << endl;
	cin >> total;
	cout << "Your total score is: " << total << endl;

	float percentage = score / total*100;
	cout << "The percentage is: " << percentage << "%" << endl;

	return 0;
}