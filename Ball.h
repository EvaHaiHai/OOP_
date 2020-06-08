#ifndef Ball_h
#define Ball_h
#include"Shape3D.h"
#include<string>

class Ball : public Shape3D{

private:
	double radius;
public:
	Ball();
	Ball(double);
	Ball(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
	string toString();
};
#endif