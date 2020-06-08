#include"Shape2D.h"

Shape2D::Shape2D() {

}
Shape2D::Shape2D(string c, bool f) {
	setColor(c);
	setFilled(f);
}