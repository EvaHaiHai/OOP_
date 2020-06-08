#include"Shape.h"
#ifndef Shape3D_h
#define Shape3D_h
class Shape3D : public Shape {

public:
	Shape3D();
	Shape3D(string, bool);
	virtual double getVolume() = 0;

};
#endif