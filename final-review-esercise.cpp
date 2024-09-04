//20	Write C++ functions to take number of rows and prints following patterns
#include <iostream>
using namespace std;

void patternA(int);
void patternB(int);
void patternC(int);
int main()
{
	int num;
	cout << "Enter a number forj pattern: ";
	cin >> num;
	
	patternA(num);
	cout << endl;
	patternB(num);
	cout << endl;
	patternC(num);

}
void patternA(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void patternB(int num)
{
	char apl = 'A';
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << apl;
		}
		apl++;
		cout << endl;
	}
}
void patternC(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int emp = num - i; emp != 0; emp--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i2 = 1; i2 <= num; i2++)
	{
		for (int emp = 1; emp <= i2; emp++)
		{
			cout << " ";
		}
		for (int j2 = num - i2; j2 != 0; j2--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}


//21	Write a function to check if a number id Armstrong number or not? A number is Armstrong if the sum of cubes of individual digits of a number is equal to the number itself.
//22	Write a function that reverses a number.
//23	Write a program to take two arrays and store results in the third array.
//24	Write a program to print largest and smallest elements of an array.
//25	Write a program to sort elements of an array in ascending or descending order ?
//26	Write a program to swap two elements using pointers and functions.
//27	Write a program using pointers to
//1.	Print all elements of an array in reverse order
//2.	Subtract  1 from each element of an array
//3.	Find sum of all elements of an array
//4.	Print all the prime factors of array elements(No need to use pointers)
// 
//28	What is void function, give example ?
//29	Write a function to
//a.print numbers counting down :
//b.Fibonacci series
//30	Char * str = “Hello”;
//C++ allocates exactly seven bytes for the above declaration
//31	The character \0 is C++ notation for a null character.
//32	A c++ string terminates with a null byte, which indicates end of array.
//33	C++ ensures that there is space enough to hold all string data necessary.
//34	The getline function gets one word from the entire line of input.
//35	A stream is a flow of data into or out of your program.
//36	An input stream is a stream of data flowing from your program, either to a file, or to the keyboard.
//37	Write the output
//Char s[80];
//Strcpy(s, ”one”);
//Strcat(s, ”two”);
//Strcat(s, ”three”);
//Cout << s;
//
//38	Write a complete program with necessary #include directives to copy the C - string constant “Hello” into the string variable aString, declared below.
//char aString[10];
//39	What is the problem(if any) with this code ?
//char s1[20] = “How you been ? ”;
//strcat(s1, “Fine as wine”);
//40	Write a short C++ code fragment that reads a line of text and prints the line with all uppercase letters.
//41	Write a simple program to print all characters in a word separated by comma(‘, ’).
//42	What is a linear search ? Write a code snippet to find for a data in an array.
//43	Write the algorithm to sort elements of an array in descending order.
//44	What is private and public ? How to you access private variables and functions.
//45	What is a constructor ?
//46	Write a simple class called rectangle with length and width as parameters.Wrote accessors and mutators to access, edit the member variables.Add functions to calculate area and display complete info of rectangle.
//
