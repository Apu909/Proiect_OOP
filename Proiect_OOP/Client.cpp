#include "Client.h"

Client::Client()
{
	setNume("gfdgdf");
	setPrenume("gfdgdfgf");
	setAdresa("dsfdsf");
	setParola("dfdsff");
}

Client::Client(string nume, string prenume)
{
	setNume(nume);
	setPrenume(prenume);
}

void Client::veziProduse()
{
	cos.veziProduse();
}

void Client::adaugainCos(Produs p)
{
	cos.adaugainCos(p);
}

void Client::stergedinCos(Produs p)
{
	cos.stergedinCos(p);
}

void Client::datePersonale()
{
}

void Client::raportComenzi()
{
}


