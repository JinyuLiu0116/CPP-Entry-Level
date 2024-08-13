#include <iostream>
using namespace std;

int main()
{
	int count;
	cout << "Please enter a number: ";
	cin >> count;

	for (int i = 1; i <= count; i++) {
		for (int r = count - 1; r >= i; r--) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int l = 1; l <= count; l++) {
		for (int m = 1; m <= l; m++) {
			cout << " ";
		}
		for (int n = count - 1; n >= l; n--) {
			cout << "* ";
		}
		cout << endl;
	}
}
