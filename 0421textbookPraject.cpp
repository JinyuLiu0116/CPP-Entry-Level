//A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed by the user’s car and the number of miles traveled by the car and will then 
//output the number of miles per gallon the car delivered.Your program should allow the
//user to repeat this calculation as often as the user wishes.Define a function to compute the
//Programming Projects 131
//number of miles per gallon.Your program should use a globally defined constant for the
//number of gallons per liter.
/*#include <iostream>
using namespace std;
const double lpg = 0.264179;
double mpg(int miles, int liters) {
	double gallons;
	gallons = lpg * liters;
	return (miles / gallons);
}
int main()
{
	char choice;
	int miles, liters;
	do {
		cout << "Enter the number of miles: ";
		cin >> miles;
		cout << "Enter the number of liters: ";
		cin >> liters;

		cout << mpg(miles, liters) << endl;
		cout << "Do you want to repect? (y/n): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
}*/

//Write a program to gauge the rate of inflation for the past year.The program asks for the
//price of an item(such as a hot dog or a one - carat diamond) both one year ago and today.It
//estimates the inflation rate as the difference in price divided by the year - ago price.Your
//program should allow the user to repeat this calculation as often as the user wishes.Define
//a function to compute the rate of inflation.The inflation rate should be a value of type
//double giving the rate as a percentage, for example 5.3 for 5.3 % .

/*#include <iostream>
using namespace std;

double inflation(double price1, double price2) {
	double rate;
	rate = (price2 - price1) / price1;
	return rate;
}

int main()
{
	char repect;
	double price1, price2;

	do {
		cout << "Enter the price for the past year: ";
		cin >> price1;
		cout << "Enter the price for this year: ";
		cin >> price2;

		cout << "The inflation is " << inflation(price1, price2) * 100 << "%" << endl;
		cout << "Do you want to repect? (y/n): ";
		cin >> repect;
	} while (repect == 'y' || repect == 'Y');
}
*/

//Reads in five scores and shows how much each
//score differs from the highest score.
/*#include <iostream>
using namespace std;

int main()
{
	int i=0, scores[5], highest=0;
	for (i; i < 5; i++) {
		cout << "Enter #" << i + 1 << " scores: ";
		cin >> scores[i];
		if (scores[i] > highest) {
			highest = scores[i];
		}
	}
	cout << "The highest scores is " << highest << endl;
	cout << "The scores and their different \n"
		 << "from the highest score is: \n";
	for (i; i < 5; i++) {
		cout << scores[i] << " off by" << (highest - scores[i]) << endl;
	}

}*/
#include <iostream>
using namespace std;
int main()
{
	int i, score[5], max;
	cout << "Enter 5 scores:\n";
	cin >> score[0];
	max = score[0];
	for (i = 1; i < 5; i++)
		{
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
		//max is the largest of the values score[0],..., score[i].
		}
	cout << "The highest score is " << max << endl
		<< "The scores and their\n"
		<< "differences from the highest are:\n";
	for (i = 0; i < 5; i++)
		cout << score[i] << " off by "
		<< (max - score[i]) << endl;
	return 0;
	2}
