#ifndef Shape_h
#define Shape_h
#include<string>
using namespace std;
class Shape {

private:
	string color;
	bool filled;
public:
	Shape();
	Shape(string, bool);
	void setColor(string);
	string getColor();
	void setFilled(bool);
	bool isFilled();
	virtual double getArea() = 0;
	virtual string toString() = 0;
};
#endif