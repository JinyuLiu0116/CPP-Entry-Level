//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//int num=1;
//	//int* pNum = &num;
//	//cout << pNum << '\n';
//	//cout << *pNum<<'\n';
//	//*pNum = 5;
//	//cout << *pNum<<'\n';
//	//cout << num << '\n';
//	int array[6] = { 1,2,5,7,9,3 };
//	int* pArray = array;
//	cout << *pArray << '\n';
//	for (int i = 0; i < 6; i++)
//	{
//		cout << *(pArray + i) << " ";
//	}
//}
//
//#include <iostream>
//using namespace std;
//const int SIZE = 10;
//
//void fillArray(int[]);
//void print(int* pArray);
//int main()
//{
//	srand(time(NULL));
//	int array[SIZE];
//	int* pArray = array;
//
//	fillArray(pArray);
//
//}
//void fillArray(int array[])
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		array[i] = rand() % 10 + 1;
//	}
//}
//void print(int* pArray)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << *(pArray + i) << " ";
//	}
//}

//Pointers to Pointers
//Task: Create an integer variable and a pointer to it.Then create a pointer to this pointer.Print the value of the
//  integer using both the pointer and the pointer to the pointer.
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	int* pNum = &num;
//	int** pP = &pNum;
//	cout << pNum << " " << *pNum << '\n'
//		<< pP << " " << **pP;
//}

////Array-copy two arrays into thirth one.
//#include <iostream>
//using namespace std;
//
//void fillArray(int[],int);
////void sortArray(int[], int);
//int addArray(int[], int[], int[],int,int);
//int main()
//{
//	srand(time(NULL));
//	int size, temp;
//	int array1[5], array2[10], array3[20];
//	int size1 = sizeof(array1) / sizeof(array1[0]);
//	int size2 = sizeof(array2) / sizeof(array2[0]);
//	fillArray(array1, size1);
//	fillArray(array2, size2);
//
//	size = addArray(array1, array2, array3, size1, size2);
//
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (array3[i] > array3[i + 1])
//		{
//			temp = array3[i];
//			array3[i] = array3[i + 1];
//			array3[i + 1] = temp;
//		}
//		
//	}
//	for (int j = 0; j <= size;j++)
//	{
//		cout << array3[j] << " ";
//	}
//}
//void fillArray(int array[], int size)
//{
//	for (int i = 0; i < size; i++)
//		array[i] = rand() % 10 + 1;
//}
////void sortArray(int array3[], int size)
////{
////	int temp;
////	for (int i = 0; i < size-1 ; i++)
////	{
////		if (array3[i] > array3[i + 1])
////		{
////			temp = array3[i];
////			array3[i] = array3[i + 1];
////			array3[i + 1] = temp;
////		}
////	}
////
////}
//int addArray(int array1[], int array2[], int array3[], int size1, int size2)
//{
//	int k = 0,size;
//	for (int i = 0; i < size1; i++)
//		array3[i] = array1[i];
//	for (int j = size1; j < size1 + size2; j++)
//	{
//		array3[j] = array2[k];
//		k++;
//		size = j;
//	}
//	return size;
//}

//sorting array
#include <iostream>
using namespace std;
const int SIZE = 30;

void fillArray(int[]);
int main()
{
	srand(time(NULL));
	int array[SIZE], temp;
	fillArray(array);
	

	for (int i = 0; i < SIZE-1; i++)
	{
		for (int j = 0; j < (SIZE - 1) - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int n = 0; n < SIZE; n++)
	{
		cout << array[n] << " ";
	}

}
void fillArray(int array[])
{
	for (int i = 0; i < SIZE; i++)
		array[i] = rand() % 100 + 1;
}