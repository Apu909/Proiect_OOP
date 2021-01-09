#pragma once
#include <string>
using namespace std;
class Utilizator
{ //nust github
	string nume;
	string prenume;
	string adresa;
	string parola;
public:
	Utilizator();
	bool autentificare();
	string getNume();
	string getPrenume();
	string getAdresa();
	string getParola();
	void setNume(string nume);
	void setPrenume(string prenume);
	void setAdresa(string adresa);
	void setParola(string parola);
};

