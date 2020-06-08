#ifndef Shape2D_h
#define Shape2D_h
#include"Shape.h"


class Shape2D : public Shape {

public:
	Shape2D();
	Shape2D(string, bool);
	virtual double getPerimeter() = 0;

};
#endif