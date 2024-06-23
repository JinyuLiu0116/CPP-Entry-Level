//when index array value is odd, add 2; is even, subtract 2.
#include <iostream>
#include <array>
#include <ctime>
using namespace std;

const int SIZE = 3;

void transf(int[], int);
int main()
{
	srand(time(NULL));
	int repect;
	cout << "How many times you want to transfer?: ";
	cin >> repect;
	int array[3];

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 10 + 1;
		cout << array[i] << " ";
	}
	cout << '\n';
	cout << "************" << endl;
	for (int i = 1; i <= repect; i++)
	{
		transf(array, SIZE);
	}
}
void transf(int array[], int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] % 2 == 0)
			array[i] = array[i] - 2;
		if (array[i] % 2 == 1)
			array[i] = array[i] + 2;
		
		cout << array[i] << " ";
	}
		cout << endl;

}