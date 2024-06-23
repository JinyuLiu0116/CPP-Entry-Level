#include <iostream>
#include <array>
#include <ctime>
using namespace std;
const int SIZE = 1000;
const int size = 101;

void fillArray(int[]);
int main()
{
	srand(time(NULL));
	int array[SIZE];
	int array100[101];
	int temp;
	fillArray(array100);

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 101;
		temp = array[i];
		array100[temp]++;
	}
	
	for (int i = 0; i < 101; i++)
	{
		if (array100[i] != 0)
		{

		}
	}
}
void fillArray(int array101[])
{
	for (int i = 0; i < 101; i++)
	{
		array101[i] = 0;
	}
}