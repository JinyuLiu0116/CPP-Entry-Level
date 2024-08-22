//structure   and   class (strat with uper case letter)
//main use of funcion is code reuse.
//OOP principles: 1 encapselation. 2 inhentence. 3 polymorphism.
//2. inhentence: check parent class/base class.(student emp::student)[saving the mamery]
//3. polymorphism: when we have parent class and child classes, we creat a defult function in the parent class
// when we creat a object, we signt the abject to one of the child class and we call a function, compile will excute the function under the child class.
// structure only has properties
// class is OOP, it not only has properties but functionalities.

#include <iostream>
#include <string>
using namespace std;
// before create any object, the memery of class or structure are 0.
//default of class: Modifier: everything is private.
class Employee 
{
	//after public, every one who has the access to the object, they can change the data of the object.
	//member of object should be private, but functions can be public.
	string name;
	int id;
public:
	void setName(string x)
	{
		name = x;//mutator, or setters: to update data.
	}
	string getName()//accessors or getters: use to let user access the private variable inside the class.
	{
		return name;
	}
	void prinInfo();
	double calculatePay();
	//constructor-has same as class name and does not have return type.
	// the default constructor only when we don't create one, once we created, there is not default constructor.
	Employee() 
	{
		name = "";
		id = 0;
	}
	//overload constructor
	Employee(string name, int id)
	{
		//this is pointer.
		this->name = name;
		this->id = id;
	}
};

struct student 
{
	//these are properties.
	string name;
	int id;
	double age;
	string email;
};
int main()
{
	//we do not declare the size, it is not array.
	//student John;
	//John.name = "John Goodweater";
	//using array; in this array, each element has the properties of name, id, age, and email.
	student MAC101[22];

	//Employee John;
	Employee John("Johnn", 2);
	John.prinInfo();

}
//function defunation for class. This function belongs to Employee class.
void Employee::prinInfo()
{
	//key word: this and arroy are used to access the properties.
	cout << this->id;
	cout << this->name;
}
