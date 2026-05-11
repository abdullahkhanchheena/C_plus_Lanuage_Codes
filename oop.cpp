#include <iostream>
using namespace std;
class shape
{
public:
	shape()
	{
	}
	virtual void setvalues() = 0;
	virtual double area() = 0;
	virtual void display() = 0;
	virtual ~shape()
	{
	}
};
class circle : public shape
{
private:
	double radius;

public:
	circle() : radius(0)
	{
	}
	void setvalues()
	{
		cout << "           Enter Values for Circle              " << endl;
		cout << "Enter Radius: ";
		cin >> radius;
	}
	double area() override
	{
		return 3.1416 * radius * radius;
	}
	void display() override
	{
		cout << "Area of Circle: " << area() << endl;
	}
	~circle()
	{
	}
};
class rectangle : public shape
{
private:
	double length;
	double width;

public:
	rectangle() : length(0), width(0)
	{
	}
	void setvalues()
	{
		cout << "            Enter Values for Rectangle              " << endl;
		cout << "Enter Length: ";
		cin >> length;
		cout << "Enter Width: ";
		cin >> width;
	}
	double area() override
	{
		return length * width;
	}
	void display() override
	{
		cout << "Area of Rectangle: " << area() << endl;
	}
	~rectangle()
	{
	}
};
class triangle : public shape
{
private:
	double base, height;

public:
	triangle() : base(0), height(0)
	{
	}
	void setvalues()
	{
		cout << "            Enter Values for Triangle              " << endl;
		cout << "Enter Base: ";
		cin >> base;
		cout << "Enter Height: ";
		cin >> height;
	}
	double area() override
	{
		return 0.5 * base * height;
	}
	void display() override
	{
		cout << "Area of Triangle: " << area() << endl;
	}
	~triangle()
	{
	}
};
int main()
{
	shape *ptr;
	circle cir;
	ptr = &cir;
	ptr->setvalues();
	ptr->area();
	ptr->display();
	rectangle Rect;
	ptr = &Rect;
	ptr->setvalues();
	ptr->area();
	ptr->display();
	triangle triang;
	ptr = &triang;
	ptr->setvalues();
	ptr->area();
	ptr->display();
	return 0;
}
