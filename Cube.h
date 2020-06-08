#ifndef Cube_h
#define Cube_h
#include"Shape3D.h"
#include<string>
class Cube : public Shape3D {
	
private:
	double side;
public:
	Cube();
	Cube(double);
	Cube(double, string, bool);
	void setSide(double);
	double getSide();
	double getVolume();
	double getArea();
	string toString();
};
#endif