#include"Circle.h"
#include"Rectangle.h"
#include"Ball.h"
#include"Cube.h"
#include<iostream>
#include<iomanip>
using namespace std;

void display(Shape& S){
	cout << S.toString();
}
void equalArea(Shape& S1, Shape& S2) {
	if (S1.getArea() == S2.getArea())
		cout << setprecision(2) << fixed <<"circle " << S1.getArea() << " = rectangle " << S2.getArea() << endl;
	else if (S1.getArea() != S2.getArea())
		cout << setprecision(2) << fixed << "circle " << S1.getArea() << "!= rectangle " << S2.getArea() << endl;
}
void equalVolume(Shape3D& S1, Shape3D& S2) {
	if (S1.getVolume() == S2.getVolume())
		cout << setprecision(2) << fixed << "ball " << S1.getVolume() << "= cube " << S2.getVolume() << endl;
	else if (S1.getVolume() != S2.getVolume())
		cout << setprecision(2) << fixed << "ball " << S1.getVolume() << " != cube " << S2.getVolume() << endl;
}
void equalPerimeter(Shape2D& S1, Shape2D& S2) {
	if (S1.getPerimeter() == S2.getPerimeter())
		cout << setprecision(2) << fixed << "circle " << S1.getPerimeter() << " = rectangle " << S2.getPerimeter() << endl;
	else if (S1.getPerimeter() != S2.getPerimeter())
		cout << setprecision(2) << fixed << "circle " << S1.getPerimeter() << " != rectangle " << S2.getPerimeter() << endl;
}

int main() {
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);
	
	cout <<"circle,"; display(circle);
	cout << "rectangle,"; display(rectangle);
	cout << "ball,"; display(ball);
	cout << "cube,"; display(cube);
	equalPerimeter(circle, rectangle);
	equalVolume(ball, cube);
}