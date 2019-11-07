#pragma once
class point {

private:

	float nX;
	float nY;

public:

	void setX(float nX);

	void setY(float nY);

	void init(float nX,float nY);

	float getX();

	float getY();

	void deplacer(float a, float b);

	void afficher();



};
