#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int amout = rand() % 5 + 3;
	int* array = new int[amout];

	for (int i = 1; i <= amout; i++) {
		int num = rand() % 5 + 5;
		for (int j = 1; j <= num; j++) {
			for (int n = 1; n <= num - j; n++) {
				cout << " ";
			}
			for (int k = 1; k <= j; k++) {
				cout << "* ";
			}
			cout << endl;
		}
		for (int j = 1; j <= num - 1; j++) {
			for (int n = 1; n <= j; n++) {
				cout << " ";
			}
			for (int k = 1; k <= num-j; k++) {
				cout << "* ";
			}
			cout << endl;
		}
		cout << endl;
	}
}