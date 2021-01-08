#pragma once
#include <iostream>
#include <list>
#include "Produs.h"
using namespace std;
class Cos
{
	list <Produs> listProduse;
	list <Produs>::iterator it;
public:
	Cos();
	Cos(list <Produs> lp);
	void stergedinCos(Produs p);
	void adaugainCos(Produs p);
	void veziProduse();
	void raportComanda(Produs p);
	~Cos();
};

