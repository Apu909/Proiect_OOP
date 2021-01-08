#pragma once
#include <string>
#include "Cos.h"
#include "Utilizator.h"
#include "Produs.h"
using namespace std;
class Client : public Utilizator, public Cos
{
	Cos cos;
public:
	Client();
	Client(string nume, string prenume);
	void veziProduse();
	void adaugainCos(Produs p);
	void stergedinCos(Produs p);
	void datePersonale();
	void raportComenzi();
};

