#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int size1 = 4;
	int* array1 = new int[size1];

	for (int i = 1; i <= size1; i++) {
		int size2 = rand() % 6 + 3;
		for (int j = 1; j <= size2; j++) {
			for (int r = 1; r <= size2 - j; r++)
				cout << " ";
			for (int n = 1; n <= j; n++)
				cout << "* ";
			cout << endl;
		}
		for (int j = 1; j <= size2-1; j++) {
			for (int r = 1; r <= j; r++)
				cout << " ";
			for (int n = 1; n <= size2-j; n++)
				cout << "* ";
			cout << endl;
		}
		cout << endl;
	}
}