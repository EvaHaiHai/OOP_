#include"Circle.h"
#include<sstream>
#include<iomanip>

Circle::Circle() {

}
Circle::Circle(double r) {
	setRadius(r);
}
Circle::Circle(double r, string c, bool f) {
	setRadius(r);
	setColor(c);
	setFilled(f);
}
void Circle::setRadius(double r) {
	radius = r;
}
double Circle::getRadius() {
	return radius;
}
double Circle::getPerimeter() {
	return getRadius() * 2 * 3.14159;
}
double Circle::getArea() {
	return getRadius() * getRadius() * 3.14159;
}
string Circle::toString() {
	stringstream ss;
	ss << getRadius() << "," << getColor() << ",";
	ss << setprecision(2) << fixed << getArea() << endl;
	return ss.str();
}