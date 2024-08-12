//#include <iostream>
//#include <string>
//using namespace std;
// in order to use string functions, we need to include <string> library.
//strlen(): string length fuction. when use input string less then the size of the string, we need to 
// use this function to get get the real size of the user input.
// when use toupper() and tolower() functions, we need to conver to char
//example: (char)toupper().
// cout << string1 + string2; the + means concatenation.
// string is a class, instead of calling it variable, wo call it object.
//when we use string, we need to use cin.ignore() function to clear the buffer that careted
// by user press enter key.

//int main()
//{
//	int age;
//	string name;
//	string massage = "Hello ";
//
//	cout << "Enter your age: ";
//	cin >> age;
//
//	cin.ignore();
//	cout << "Enter your name: ";
//	getline(cin, name);
//
//	cout << massage + name << endl;
//	cout << "The length of your name is " << name.length() << endl;
//	cout << "The last character of your name is " << name.at(name.length() - 1);
//}

//#include <iostream>
//#include <string>
//using namespace std;
//// we can assign a C
//int main()
//{
//	string message = "Hello World";
//	char cMessage[20];
//	strcpy(cMessage, message.c_str());//convers a string to a c-string.
//
//	//append function
//	cout << message.append("!Welcome");
//	
//}

//Write a program to reverse a string
#include <iostream>
#include <string>
using namespace std;

bool checkPalindrom(string);
int main()
{
	string reverse = "12345";
	string stor = "";// every string need to be inistialized.
	string temp;

	//for (int i = reverse.length() - 1; i >= 0; i--)
	//{
	//	temp = reverse[i];
	//	stor.append(temp);//append function take every element assigns to end of a string.
	//}

	if (checkPalindrom(reverse))
	{
		cout << reverse << " is a palindrom string.";
	}
	/*check palindrom.*/
}
bool checkPalindrom(string reverse)
{
	int left = 0;
	int right = reverse.length() - 1;
	while (reverse[left]<reverse[right])
	{
		if (reverse[left] != reverse[right])
		{
			return false;
			break;
		}
	}
	return true;

}

