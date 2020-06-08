#include"Rectangle.h"
#include<sstream>
#include<iomanip>

Rectangle::Rectangle() {

}
Rectangle::Rectangle(double w, double h) {
	setWidth(w);
	setHeight(h);
}
Rectangle::Rectangle(double w, double h, string c, bool f) {
	setWidth(w);
	setHeight(h);
	setColor(c);
	setFilled(f);
}
void Rectangle::setWidth(double w) {
	width = w;
}
double Rectangle::getWidth() {
	return width;
}
void Rectangle::setHeight(double h) {
	height = h;
}
double Rectangle::getHeight() {
	return height;
}
double Rectangle::getPerimeter() {
	return (width + height) * 2;
}
double Rectangle::getArea() {
	return width * height;
}
string Rectangle::toString() {
	stringstream ss;
	ss << getWidth() << "," << getHeight() << "," << getColor() << ",";
	ss<< setprecision(2) << fixed << getArea() << endl;
	return ss.str();
}