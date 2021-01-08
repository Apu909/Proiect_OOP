#include "Cos.h"

Cos::Cos() {
	Produs p;
	Produs p1;
	listProduse.push_back(p);
	listProduse.push_back(p1);
}

Cos::Cos(list <Produs> lp) {
	copy(lp.begin(), lp.end(), back_insert_iterator<list<Produs>>(listProduse));
}

void Cos::stergedinCos(Produs p)
{
	listProduse.remove(p);
}

void Cos::adaugainCos(Produs p)
{
	listProduse.push_back(p);
}

void Cos::veziProduse()
{
	for (it = listProduse.begin(); it != listProduse.end(); ++it) {
		cout << "Nume produs: " << it->Produs::getNumeProdus() << endl;
		cout << "Pret produs: " << it->Produs::getPretProdus() << endl;
		cout << endl;
	}
}

void Cos::raportComanda(Produs p)
{
	FILE* bin_file;

	bin_file = fopen("Raport Comanda", "wb+");

	//ostream ofs("RaportComanda.bin", ios::binary);

	it = listProduse.begin();
	do {
		fwrite(&p.getNumeProdus(), p.getNumeProdus().size() + 1, 1, bin_file);
		fwrite(&to_string(p.getIDProdus()), sizeof(p.getIDProdus()), 1, bin_file);
		fwrite(&to_string(p.getPretProdus()), sizeof(p.getPretProdus()), 1, bin_file);
		++it;
	} while (it != listProduse.end());
	fclose(bin_file);
}

Cos::~Cos()
{
	listProduse.clear();
}






