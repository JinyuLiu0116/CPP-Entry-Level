#include <iostream>
using namespace std;

int main()
{
	int h, r;
	double total, gross, deduction;
	cout << "please enter your working hours (from 20-60): ";
	cin >> h;
	cout << "please enter your hourly rate (from 10-50): ";
	cin >> r;
	
	if (h >= 20 && h <= 60) 
	{
		if (h <= 40) {
			if (r >= 10 && r <= 25) {
				gross = h * r;
				deduction = gross * 0.05;
				total = gross - deduction;
			}
			else if (r >= 26 && r <= 50) {
				gross = h * r;
				deduction = gross * 0.07;
				total = gross - deduction;
			}
		}
		else {
			double over;
			over = ((h - 40) * r) * 0.05;
	
			if (r >= 10 && r <= 25) {
				gross = r * h + over;
				deduction = gross * 0.05;
				total = gross - deduction;
			}
			else if (r >= 26 && r <= 50) {
				gross = r * h + over;
				deduction = gross * 0.07;
				total = gross - deduction;
			}
		}
		cout << "Your gross: "<< gross << endl;
		cout << "Your deductions: " << deduction << endl;
		cout << "Your total: " << total << endl;
	}
	else
	{
		cout << "invalid value.";
	}
}
