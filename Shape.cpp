#include"Shape.h"


Shape::Shape(){

}
Shape::Shape(string c, bool f) {
	color = c;
	filled = f;
}
void Shape::setColor(string c) {
	color = c;
}
string Shape::getColor() {
	return color;
}
void Shape::setFilled(bool f) {
	filled = f;
}
bool Shape::isFilled() {
	return filled;
}