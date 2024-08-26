#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int grade[5];
	double sumOfGrade = 0;
	char letterGrade[5], choice;
	do
	{
		cout << "Enter student's name: ";
		cin.ignore();//to avoid user press enter key because getline() will accept enter key.
		getline(cin, name);//use getline() function to get the full name.
		cout << "Enter your grades for five courses:1.English 2.Math 3.CS 4.History 5.Gym \n";
		for (int i = 0; i < 5; i++)//this loop for user input their grades
		{
			cout << "Course number " << i + 1 << ": ";
			cin >> grade[i];
		}
		for (int i = 0; i < 5; i++)//assign the letter grade based on the range of grades. 
		{
			if (grade[i] >= 91 && grade[i] <= 100)
			{
				letterGrade[i] = 'A';
			}
			else if (grade[i] >= 81 && grade[i] <= 90)
			{
				letterGrade[i] = 'B';
			}
			else if (grade[i] >= 71 && grade[i] <= 80)
			{
				letterGrade[i] = 'C';
			}
			else if (grade[i] >= 61 && grade[i] <= 70)
			{
				letterGrade[i] = 'D';
			}
			else
			{
				letterGrade[i] = 'F';
			}
		}
		cout << "Your letter grades are:\n";
		cout << " 1.English:" << letterGrade[0] << endl << " 2.Math: " << letterGrade[1] << endl << " 3.CS: " << letterGrade[2] << endl
			<< " 4.History: " << letterGrade[3] << endl << " 5.Gym: " << letterGrade[4] << endl;

		for (int i = 0; i < 5; i++)//adding grades.
		{
			sumOfGrade += grade[i];
		}
		cout << "The sum of your grades is: " << sumOfGrade << endl;

		double average = sumOfGrade / 5;
		cout << "The average of your grades is: " << average << endl;
		cout << "\n Do you want to enter another student's name? (Y/N): ";
		cin >> choice;
		switch (choice)
		{
		case 'Y':
		case 'y': choice = 'Y'; break;
		case 'N':
		case 'n': choice = 'N'; break;
		default:cout << "Invalid input letter.";
		}
	} while (choice != 'N');
	cout << "\nThank you for using.\n";


}
