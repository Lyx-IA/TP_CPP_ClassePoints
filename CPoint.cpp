#include "CPoint.h"
#include <iostream>
///Assesseurs
float point::getX() {
	return this->nX;
}

float point::getY() {
	return this->nY;
}

///mutateurs
void point::setX(float nX) {
	this->nX = nX;
}

void point::setY(float nY) {
	this->nY = nY;
}



//Declarations

void point::init(float nX, float nY) {
	this->nY = nY;
	this->nX = nX;
}

void point::deplacer(float a, float b)
{
	this->nX += a;
	this->nY += b;
}

void point::afficher()
{
	std::cout << "X: " << this->nX << std::endl;
	std::cout << "Y: " << this->nY << std::endl;
}

