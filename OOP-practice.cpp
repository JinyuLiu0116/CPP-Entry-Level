#include <iostream>
using namespace std;

class Rectangle
{
	double Length;
	double Width;
public:
	Rectangle()
	{
		Length = 0;
		Width = 0;
	}
	Rectangle(double length, double width) 
	{
		Length = length;
		Width = width;
	}
	double getLength()
	{
		return this->Length;
	}
	double getWidth()
	{
		return this->Width;
	}
	void setLength(double x)
	{
		this->Length = x;
	}
	void setWidth(double y)
	{
		this->Width = y;
	}
	double calculateAre() {
		return this->Length * this->Width;
	}
	void displyInfo()
	{
		cout << "The length is " << this->Length << '\n';
		cout << "The width is " << this->Width << '\n';
		cout << "The area of the rectangle is " << calculateAre() << '\n';
	}
};
int main()
{
	Rectangle rectangle(8.5, 3.5);
	//cout << rectangle.getLength();
	//cout << endl;
	//rectangle.setWidth(5.0);
	//cout << rectangle.getWidth();
	rectangle.calculateAre();
	rectangle.displyInfo();
}
