//check prime number by using user defined function.
#include <iostream>
using namespace std;

bool checkPrime(int num) {
	int i;
	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int num;
	cout << "enter a number to check prime: ";
	cin >> num;
	if (checkPrime(num))
	{
		cout << num << " is prime.";
	}
	else
	{
		cout << num << " is not prime.";
	}
}