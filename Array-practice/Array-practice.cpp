#include <iostream>
#include <ctime>
using namespace std;
const int SIZE = 10;

void fillArray(int[]);
void sortArray(int[]);
char conver(int);
int main()
{
	int array[SIZE];
	char letter[SIZE];
	fillArray(array);

	cout << "The value of your array are:";
	for (int index = 0; index < SIZE; index++)
		cout << array[index] << " ";
	cout << '\n';

	sortArray(array);
	cout << "The value of your array in ascending:";
	for (int index = 0; index < SIZE; index++)
		cout << array[index] << " ";
	cout << '\n';

	cout << "The number conver to letter are:";
	for (int index = 0; index < SIZE; index++)
	{
		letter[index] = conver(array[index]);
		cout << letter[index] << " ";
	}

}
void fillArray(int array[])
{
	srand(time(NULL));
	for (int index = 0; index < SIZE; index++)
	{
		array[index] = rand() % 26 + 66;
	}
}
void sortArray(int array[])
{
	int temp;
	for (int i = 0; i < SIZE-1; i++)
	{
		for (int j = 0; j < (SIZE - 1) - i; j++)
		{
			if (array[j] >= array[j + 1])
			{
				temp = array[j+1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

}
char conver(int a)
{	
	return (char)a;
}


