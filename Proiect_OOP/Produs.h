#pragma once
#include <string>
using namespace std;
class Produs
{
	string numeProdus;
	int IDProdus;
	float pretProdus;
public:
	Produs();
	friend bool operator==(const Produs& p, const Produs& p1);
	bool operator!=(const Produs& p);
	string getNumeProdus();
	float getPretProdus();
	int getIDProdus();
};

