#include <iostream>;
using namespace std;

int main()
{
	int numberOfKids;
	cout << "Hello parent.\n";
	cout << "Welcome to Sunnyside daycare center.\n";

	cout << "How many kids do you have?\n";
	cin >> numberOfKids;

	if (numberOfKids > 1)
		cout << "Please write down their names and ages.\n"
			 << "Their teacher will come and bring them to classroom.\n";
	if (numberOfKids == 1)
		cout << "Please write down you kid's name and age.\n"
		<< "Your kid's teacher will come and bring your kid to classroom.\n";
	else
		cout << "Our staff will show you around our center.\n"
			 <<"If you have any question, feel free to ask.\n";
	return 0;
}
