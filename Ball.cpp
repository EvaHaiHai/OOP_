#include"Ball.h"
#include<sstream>
#include<iomanip>

Ball::Ball() {
	
}
Ball::Ball(double r) {
	setRadius(r);
}
Ball::Ball(double r, string c, bool f) {
	setRadius(r);
	setColor(c);
	setFilled(f);
}
void Ball::setRadius(double r) {
	radius = r;
}
double Ball::getRadius() {
	return radius;
}
double Ball::getVolume() {
	return getRadius() * getRadius() * getRadius() * 3.14159 * 4 / 3;
}
double Ball::getArea() {
	return getRadius() * getRadius() * 3.14159 * 4;
}
string Ball::toString() {
	stringstream ss;
	ss << getRadius() << "," << getColor() << ",";
	ss<< setprecision(2) << fixed << getArea() << endl;
	return ss.str();
}