#include <iostream>
#include <array>
using namespace std;

void fillArray(int[], int);
int main()
{
	int array[10];
	int size = sizeof(array) / sizeof(array[0]);
	fillArray(array, size);

	int max = array[0];
	cout << "The scores are:";
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
		cout << array[i] << " ";
	}
	cout << '\n';
	cout << "The largest score is: " << max;
}
void fillArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}
}
