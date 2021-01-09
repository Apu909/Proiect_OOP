#pragma once
#include <iostream>
#include <list>
#include "Produs.h"
class Depozit
{
	list <Produs> listProduseinStoc;
	list <Produs>::iterator it;
public:
	Depozit();
	void stergeProdusdinStoc();
	void adaugaProdusinStoc();
	void editeazaProdusdinStoc();
	void veziProduseinStoc();
};

