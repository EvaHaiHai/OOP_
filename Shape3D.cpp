#include"Shape3D.h"

Shape3D::Shape3D() {

}
Shape3D::Shape3D(string c, bool f) {
	setColor(c);
	setFilled(f);
}