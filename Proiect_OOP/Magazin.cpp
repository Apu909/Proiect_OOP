#include "Magazin.h"

void Magazin::adaugaProdus(Produs p)
{
	depozit.adaugaProdusinStoc(p);
}

void Magazin::stergeProdus(Produs p)
{
	depozit.stergeProdusdinStoc(p);
}

void Magazin::editeazaProdus(Produs p)
{
	depozit.editeazaProdusdinStoc(p);
}

void Magazin::veziProduse()
{
	depozit.veziProduseinStoc();
}

void Magazin::raportComenzi()
{

}
