#include <iostream>
#include "Client.h"
#include "Cos.h"
using namespace std;

void main() {
	Client c;
	Produs p;
	Produs p1;
	c.adaugainCos(p);
	c.adaugainCos(p1);
	c.veziProduse();
	c.stergedinCos(p1);
	c.veziProduse();
}