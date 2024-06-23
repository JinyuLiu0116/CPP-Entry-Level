#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num - i; j++) {
			cout << " ";
		}
		for (int s = 1; s <= i; s++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i2 = 1; i2 <= num - 1; i2++) {
		for (int j2 = 1; j2 <= i2; j2++) {
			cout << " ";
		}
		for (int s2 = 1; s2 <= num - i2; s2++) {
			cout << "* ";
		}
		cout << endl;
	}
}