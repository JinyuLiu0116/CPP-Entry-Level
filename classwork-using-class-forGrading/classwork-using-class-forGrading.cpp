#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

class School 
{
public:
	string name;
	string subject[SIZE] = { "English","Math","CS","History","Gym" };
	double grade[SIZE];
	double total = 0;
	double average;
	char letterGrade;
};

int main()
{

	School student;
	//ask for name
	cout << "Enter your name: ";
	getline(cin, student.name);
	cout << '\n' << "Hello " << student.name << endl;
	cout << "Enter your score for subjects:\n";
	cout << "*****************************\n";
	//assigns scores for subjects
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "." << student.subject[i] << ": ";
		cin >> student.grade[i];
	}

	//calculate total and average
	for (int i = 0; i < SIZE; i++)
		student.total += student.grade[i];
	student.average = student.total / 5;
	//assign letter grade
	if (student.average >= 90 && student.average <= 100)
		student.letterGrade = 'A';
	else if (student.average >= 80 && student.average <= 90)
		student.letterGrade = 'B';
	else if (student.average >= 70 && student.average <= 80)
		student.letterGrade = 'C';
	else if (student.average >= 60 && student.average <= 70)
		student.letterGrade = 'D';
	else
		student.letterGrade = 'F';
	cout << '\n' << "*****************************\n";
	//display imformation
	cout << "Student Name: " << student.name << endl;
	cout << " Total Score: " << student.total << endl;
	cout << "     Avergae: " << student.average << "%" << endl;
	cout << "Letter Grade: " << student.letterGrade << endl;




}