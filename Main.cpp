
#include <iostream>
#include <cstdlib>
#include "CPoint.h"
using namespace std;



int main() {
	point p;
	p.init(1, 1);
	p.afficher();
	p.deplacer(3.5, 2);
	cout << "Les coordonnes du point apres deplacement :" << endl;
	p.afficher();

	system("pause");
	return 0;
}
