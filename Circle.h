#ifndef Circle_h
#define Circle_h
#include"Shape2D.h"
#include<string>

class Circle : public Shape2D {

private:
	double radius;
public:
	Circle();
	Circle(double);
	Circle(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getPerimeter();
	double getArea();
	string toString();
};
#endif