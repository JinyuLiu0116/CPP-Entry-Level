#include <iostream>
#include <ctime>
using namespace std;
const int SIZE = 20;

int main()
{
	srand(time(NULL));
	int array[SIZE];
	int temp,check;

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 30 + 1;
		cout << array[i] << " ";
	}
	for (int i = 0; i < SIZE-1; i++)
	{
		for (int j = 0; j < (SIZE - 1) - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << '\n';
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << " ";
	}
}