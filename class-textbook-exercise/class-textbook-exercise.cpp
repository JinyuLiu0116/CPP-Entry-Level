/*#include <iostream>
using namespace std;

class DayOfYear {
public:
	int month;
	int day;
	void output();
};

int main()
{
	DayOfYear today, birthday;
	cout << "Enter today's day:\n";
	cout << "Enter month as a number: ";
	cin >> today.month;
	cout << "Enter the day of the month: ";
	cin >> today.day;
	
	cout << "Today's day is: ";
	today.output();
	cout << endl;
	cout << "Your birthday is: ";
	birthday.output();
	cout << endl;

	cout << "Enter your birthday: ";
	cout << "Enter month as a number: ";
	cin >> birthday.month;
	cout << "Enter the day of the month: ";
	cin >> birthday.day;

	if (today.month == birthday.month && today.day == birthday.day)
	{
		cout << "Happy birthday!";
	}
	else
	{
		cout << "Happy unbirthday!";
	}
}
void DayOfYear::output()
{
	switch (month)
	{
	case 1: cout << "January "; break;
	case 2: cout << "February "; break;
	case 3: cout << "March "; break;
	case 4: cout << "April "; break;
	case 5: cout << "May "; break;
	case 6: cout << "June "; break;
	case 7: cout << "July "; break;
	case 8: cout << "August "; break;
	case 9: cout << "September "; break;
	case 10: cout << "October "; break;
	case 11: cout << "November "; break;
	case 12: cout << "December "; break;
	default: cout << "invalid input.";
	}
	cout << day;
}*/

#include <iostream>
#include <cstdlib>
using namespace std;

class DayOfYear {
	int month;
	int day;
public:
	void input();
	void output();
	void set(int newMonth, int newDay);
	void set(int newMonth);
	int getMonthNumber();
	int getDay();
};
int main()
{

}
void DayOfYear::set(int newMonth)
{
	if (newMonth >= 1 && newMonth <= 12)
	{
		month = newMonth;
	}
	else
	{
		cout << "Illegal month value!\n";
		exit(1);
	}
	day = 1;
}
void DayOfYear::set(int newMonth, int newDay) {
	if (newMonth >= 1 && newMonth <= 12)
	{
		month = newMonth;
	}
	else
	{
		cout << "Illegal month value!\n";
		exit(1);
	}
	if (newDay >= 1 && newDay <= 31)
	{
		day = newDay;
	}
	else
	{
		cout << "Illegal day value!\n";
		exit(1);
	}
}
void DayOfYear::input() {
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the day: ";
	cin >> day;
	if (month < 1 || month>12 || day < 1 || day>31)
	{
		cout << "Illegal date!\n";
		exit(1);
	}
}
void DayOfYear::output() {
	switch (month) {
	case 1:cout << "January "; break;
	case 2:cout << "February "; break;
	case 3:cout << "March "; break;
	case 4:cout << "April "; break;
	case 5:cout << "May "; break;
	case 6:cout << "June "; break;
	case 7:cout << "July "; break;
	case 8:cout << "August "; break;
	case 9:cout << "September "; break;
	case 10:cout << "October "; break;
	case 11:cout << "November "; break;
	case 12:cout << "December "; break;
	default:cout << "Invalid input ";
	}
	cout << day;
}
int DayOfYear::getMonthNumber() {
	return month;
}
int DayOfYear::getDay() {
	return day;
}
