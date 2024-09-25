//Create a function that takes two arguments. Both arguments are integers,a and b.
//return true if one of them is 10 or if their sum is 10.
/*#include <iostream>
using namespace std;

bool makeTen(int, int);
int main()
{
	srand(time(NULL));
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	if (makeTen(a, b))
		cout << a << " and " << b << " make ten.";
	else
		cout << a << " and " << b << " do no make ten.";
}
bool makeTen(int a, int b)
{
	if (a == 10 || b == 10 || (a + b) == 10)
	{
		return true;
	}
	return false;
}
*/

/*#include <iostream>
using namespace std;

int frames(int, int);
int main()
{
	int minute;
	int fps;
	cout << "Enter the number of minute: ";
	cin >> minute;
	cout << "Enter the frames per second: ";
	cin >> fps;
	cout << frames(minute, fps);

}
int frames(int minute, int fps)
{
	int second = minute * 60;
	return second * fps;
}
*/

//You must calculate the number of people there will be in three decades from now.
/*#include <iostream>
using namespace std;

int futureP(int, int);
int main()
{
	int currentP;
	int monthlyB;
	cout << "Enter current population: ";
	cin >> currentP;
	cout << "Enter monthly birth: ";
	cin >> monthlyB;
	
	cout << futureP(currentP, monthlyB);
}
int futureP(int currentP, int monthlyB) 
{
	int p = monthlyB * 12 * 30;
	return p + currentP;
}
*/

//algorithms-very easy-Four Passengers and a Driver
/*#include <iostream>
using namespace std;

int totalCar(int);
int main()
{
	int num;
	cout << "Enter the number of passengers: ";
	cin >> num;
	cout << totalCar(num);
}
int totalCar(int num)
{
	if (num == 0)
		return 0;
	return ceil(num/5.0);
}*/

//array-easy-absolute sum
/*#include <iostream>
using namespace std;

int getAbsSum(int[], int);
int main()
{
	int array[] = { 2,-1,4,8,10 };
	int size = sizeof(array) / sizeof(array[0]);
	cout << getAbsSum(array, size);
}
int getAbsSum(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + abs(array[i]);
	}
	return sum;
}*/

//array-mid-Odd Up, Even Down — N Times
#include <iostream>
using namespace std;
const int SIZE = 3;

void fillArray(int[]);
void transform(int[], int);
int main()
{
	srand(time(NULL));
	int array[SIZE];
	int times;
	fillArray(array);
	for (int i = 0; i < SIZE; i++)
		cout << array[i]<<" ";
	cout << "\n How many times do you want to transform?: ";
	cin >> times;

	transform(array, times);

}
void fillArray(int array[])
{
	int temp,i=0;
	do
	{
		array[i] = rand() % 11;
		if (array[i] == array[i - 1] || array[i] == array[i - 2])
			continue;
		else
			i++;
	} while (i < SIZE);
}
void transform(int array[], int times)
{
	for (int j = 0; j < times; j++) {
		for (int i = 0; i < SIZE; i++)
		{
			if (array[i] % 2 != 0)
				array[i] += 2;
			if (array[i] % 2 == 0)
				array[i] -= 2;

			cout << array[i] << " ";
		}
		cout << endl;
	}
}
