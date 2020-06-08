#ifndef Rectangle_h
#define Rectangle_h
#include"Shape2D.h"

class Rectangle : public Shape2D {

private:
	double width, height;
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(double, double, string, bool);
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	double getPerimeter();
	double getArea();
	string toString();
};
#endif 
