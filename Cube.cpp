#include"Cube.h"
#include<sstream>
#include<iomanip>

Cube::Cube() {

}
Cube::Cube(double s) {
	setSide(s);
}
Cube::Cube(double s, string c, bool f) {
	setSide(s);
	setColor(c);
	setFilled(f);
}
void Cube::setSide(double s) {
	side = s;
}
double Cube::getSide() {
	return side;
}
double Cube::getVolume() {
	return getSide() * getSide() * getSide();
}
double Cube::getArea() {
	return getSide() * getSide() * 6;
}
string Cube::toString() {
	stringstream ss;
	ss << getSide() << "," << getColor() << ",";
	ss << setprecision(2) << fixed << getArea() << endl;
	return ss.str();
}