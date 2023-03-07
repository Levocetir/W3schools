#include <iostream>
#include <string>
using namespace std;

//------Dìdiènost s Protected------
//v tride je pouzito misto public private
//atributy je nutno nastavit pomoci setteru a získat jdou pøes getter

class Zbozi {
protected:
	string nazev;
	int cena;

public:
	void setZbozi(string nazev, int cena) {
		this->nazev = nazev;
		this->cena = cena;
	}

	void getZbozi() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << endl;
	}
};

class Elektronika : public Zbozi {
protected:
	int spotreba;

public:
	void setElektronika(string nazev, int cena, int spotreba) {
		this->nazev = nazev;
		this->cena = cena;
		this->spotreba = spotreba;
	}

	void getElektronika() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << "\tSpotreba: " << spotreba << endl;
	}
};

class DomaciVyroba { //DomaciVyroba musi být definována vždy pøed potomkem!
public:
	void zjistitVyrobu() {
		cout << "Domaci vyroba" << endl;
	}
};

class Potraviny : public Zbozi, public DomaciVyroba { // Vícenásobná dìdiènost
protected:
	int datumSpotreby;

public:
	void setPotraviny(string nazev, int cena, int datumSpotreby) {
		this->nazev = nazev;
		this->cena = cena;
		this->datumSpotreby = datumSpotreby;
	}

	void getPotraviny() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << "\t\tDatum sporeby: " << datumSpotreby << endl;
	}
};

class Pecivo : public Potraviny { // Víceúrovòová dìdiènost
private:
	string druh;

public:
	void setPecivo(string nazev, int cena, int datumSpotreby, string druh) {
		this->nazev = nazev;
		this->cena = cena;
		this->datumSpotreby = datumSpotreby;
		this->druh = druh;
	}

	void getPecivo() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << "\t\tDatum sporeby: " << datumSpotreby << "\tDruh: " << druh << endl;
	}
};


int main() {
	Zbozi obj0;
	obj0.setZbozi("Tuzka", 5);
	obj0.getZbozi();

	Elektronika obj1;
	obj1.setElektronika("TV", 8000, 100);
	obj1.getElektronika();

	Potraviny obj2;
	obj2.setPotraviny("Hrusek", 8, 3);
	obj2.getPotraviny();

	Pecivo obj3;
	obj3.setPecivo("Rohlik", 3, 1, "svetly");
	obj3.getPecivo();

	return 0;
}