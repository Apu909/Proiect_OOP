#include "Produs.h"



bool operator==(const Produs& p, const Produs& p1) {
	return p.numeProdus == p1.numeProdus && p.IDProdus == p1.IDProdus;
}

Produs::Produs()
{
	numeProdus = "aaaaaaaaa";
	IDProdus = 1;
	pretProdus = 19.99f;
}

bool Produs::operator!=(const Produs& p) {
	return numeProdus != p.numeProdus && IDProdus != p.IDProdus;
}

string Produs::getNumeProdus() {
	return numeProdus;
}

float Produs::getPretProdus()
{
	return pretProdus;
}

int Produs::getIDProdus()
{
	return IDProdus;
}
