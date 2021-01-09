#pragma once
#include <string>
#include "Depozit.h"
#include "Utilizator.h"
#include "Produs.h"

using namespace std;

class Magazin : public Utilizator
{
	Depozit depozit;

public:
	Magazin();
	void adaugaProdus(Produs p);
	void stergeProdus(Produs p);
	void editeazaProdus(Produs p);
	void veziProduse();
	void raportComenzi();
};

