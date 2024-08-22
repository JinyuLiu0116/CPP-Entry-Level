//#include <iostream>
//#include <array>
//#include <ctime>
//using namespace std;
//
//// to initialize a 2-dimensional array
//void fillArrays(int[][3], int[][3], int, int);
//
//int main()
//{
//	srand(time(NULL));
//	int size1 = 2;
//	int size2 = 3;
//	int array1[2][3] = { {1,2,3},{4,5,6} };
//	int array2[2][3] = { {5,1,3},{2,4,5} };
//	int arraySum[2][3];
//
//	/*fillArrays(array1, array2, size1, size2);*/
//
//	for (int rows = 0; rows < 2; rows++)
//	{
//		for (int cols = 0; cols < 3; cols++)
//		{
//			arraySum[rows][cols] = array1[rows][cols] + array2[rows][cols];
//		}
//	}
//	for (int rows = 0; rows < 2; rows++)
//	{
//		cout << "Row " << rows<<": [";
//		for (int cols = 0; cols < 3; cols++)
//		{
//			cout << arraySum[rows][cols] << " ";
//		}
//		cout << "]" << endl;
//	}
//}
//void fillArrays(int array1[][3], int array2[][3], int size1, int size2)
//{
//	for (int rows = 0; rows < size1; rows++)
//	{
//		for (int cols = 0; cols < size2; cols++)
//		{
//			array1[rows][cols] = rand() % 10 + 1;
//			array2[rows][cols] = rand() % 10 + 1;
//		}
//	}
//}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char array1[6];
	strcpy(array1, "Hello");//
	if (strcmp(array1, array2))//string compare function: strcmp()
		cout << "Strings not same.";
	else
		cout << "Strings are same";

	//function check length of the string: strlen()  this function will give a length not include null value.

	//get line function to get string input from user: cin.getline(name of the C-string,length) length should be C-string size -1.

}
