#include <iostream>
using namespace std;

class rectangle 
{
	int length, width;
public:
	//always constructor first;
	rectangle()
	{
		length = 0, width = 0;
	}
	rectangle(int x, int y)
	{
		length = x;
		width = y;
	}
	//accessor and mytators
	//the objects call these functions
	int getLength()
	{
		return this->length;
	}
	int getWidth()
	{
		return this->width;
	}
	void setLength(int x)
	{
		this->length = x;
	}
	void setWidth(int y)
	{
		this->width = y;
	}
	int calculateAre();
	int displayProperties();
};
int main()
{
	rectangle length(5,7);
	length.displayProperties();

	length.setLength(8);//update the value.
	cout << endl;
	rectangle width;
	cout << width.getWidth();
	
}
//int rectangle::getLength()
//{
//	this->length;
//}
//int rectangle::getWidth()
//{
//	this->width;
//}
int rectangle::calculateAre()
{
	return (this->length * this->width);
}
int rectangle::displayProperties()
{
	cout << "The length of rectangle is" << this->length << endl;
	cout << "The length of rectangle is" << this->width << endl;
	cout << "The length of rectangle is" << this->calculateAre << endl;
}