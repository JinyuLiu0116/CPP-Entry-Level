//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int array[10][20][30];
//	int counter = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			for (int z = 0; z < 30; z++)
//			{
//				array[i][j][z] = rand();
//				cout << array[i][j][z] <<" this is line #"<<counter+1 << '\n';
//				counter++;
//			}
//		}
//	}
//}

#include <iostream>
using namespace std;

int main()
{
	int array[10], store=0;
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 11 + 1;
		cout << array[i] <<" ";
	}
	cout << endl;
	//for (int j = 0; j < 10-1; j++)
	//{
	//	for (int i = 0; i < 10-1; i++)
	//	{
	//		if (array[i] > array[i + 1])
	//		{
	//			store = array[i+1];
	//			array[i+1] = array[i];
	//			array[i] = store;
	//		}
	//	}
	//}

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 9; j++) {

			if (array[j + 1] < array[j]) {
				//swap
				store = array[j + 1];
				array[j + 1] = array[j];
				array[j] = store;

			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
			cout << array[i] <<" ";
	}
}
