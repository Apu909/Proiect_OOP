#include "Utilizator.h"

Utilizator::Utilizator()
{
	nume = "asadasdad";
	prenume = "dsadads";
	adresa = "dsaadd";
	parola = "sadafdd";
}

string Utilizator::getNume()
{
	return nume;
}

string Utilizator::getPrenume()
{
	return prenume;
}

string Utilizator::getAdresa()
{
	return adresa;
}

string Utilizator::getParola()
{
	return parola;
}

void Utilizator::setNume(string nume)
{
	this->nume = nume;
}

void Utilizator::setPrenume(string prenume)
{
	this->prenume = prenume;
}

void Utilizator::setAdresa(string adresa)
{
	this->adresa = adresa;
}

void Utilizator::setParola(string parola)
{
	this->parola = parola;
}
