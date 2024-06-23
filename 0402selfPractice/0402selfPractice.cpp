// (a random number between 1 and 10)->(get user input)->(a for loop to run guessing game).
// inside loop:
// (if statement for win condition)->
// (else if for incorrect guess and count guessing times)->
// (else for correct guess and output guessing times).
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int num, guess, count = 1;//count=1 because first user input is outside loop.
	num = rand() % 10 + 1;//random number(1-10)
	//cout << num;
	cout << "Enter your guessing number(1-10): ";
	cin >> guess;

	for (int i = 1; i <= 11; i++) 
	{
		if (i == 1 && guess == num)//first round and right number.  
		{
			cout << "Congratulations! You win!" << endl;
			break;//to stop the loop.
		}
		else if (guess != num) {
			cout << "Incorrect, please guess again: ";
			cin >> guess;//let use input a new guessing number.
			count = count + 1;//count guessing times.
		}
		else {
			cout << "Correct number.\n";
			cout << "You have guessed " << count << " times.";
			break;//to stop the loop.
		}

	}
}
*/


//creat four different functions both using double varibale type.
//write expresstions for each function and return statement.
//declare two double type variable for user input number
//declare an int type variable to let user choose operater by number.
//write a switch, inside the switch, call funtions base on user input.

/*#include <iostream>
using namespace std;

void menu() {
	cout << "Enter 1 for addition.\n";
	cout << "Enter 2 for subraction.\n";
	cout << "Enter 3 for multiplication.\n";
	cout << "Enter 4 for division.\n";
};
double add(double x, double y) {
	double sum = x + y;
	return sum;
}
double subract(double x, double y) {
	double different = x - y;
	return different;
}
double multiple(double x, double y) {
	double product = x * y;
	return product;
}
double divided(double x, double y) {
	double quoter = x / y;
	return quoter;
}

int main() 
{
	double num1, num2;
	int operation;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	menu();
	cin >> operation;

	switch (operation) {
	case 1:
		cout << add(num1, num2) << endl; 
		break;
	case 2:
		cout << subract(num1, num2) << endl; 
		break;
	case 3:
		cout << multiple(num1, num2) << endl; 
		break;
	case 4:
		cout << divided(num1, num2) << endl; 
		break;

	default :
		cout << "invalid operater number." << endl;
	}
}
*/