#include <iostream>
#include <string>
using namespace std;

//------Dìdiènost s Protected a Polymorfismus------
//metody set a get byly pøepsány na stejný název

class Zbozi {
protected:
	string nazev;
	int cena;

public:
	void set(string nazev, int cena) {
		this->nazev = nazev;
		this->cena = cena;
	}

	void get() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << endl;
	}
};

class Elektronika : public Zbozi {
protected:
	int spotreba;

public:
	void set(string nazev, int cena, int spotreba) {
		this->nazev = nazev;
		this->cena = cena;
		this->spotreba = spotreba;
	}

	void get() {
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
	void set(string nazev, int cena, int datumSpotreby) {
		this->nazev = nazev;
		this->cena = cena;
		this->datumSpotreby = datumSpotreby;
	}

	void get() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << "\t\tDatum sporeby: " << datumSpotreby << endl;
	}
};

class Pecivo : public Potraviny { // Víceúrovòová dìdiènost
private:
	string druh;

public:
	void set(string nazev, int cena, int datumSpotreby, string druh) {
		this->nazev = nazev;
		this->cena = cena;
		this->datumSpotreby = datumSpotreby;
		this->druh = druh;
	}

	void get() {
		cout << "Nazev: " << nazev << "\tCena: " << cena << "\t\tDatum sporeby: " << datumSpotreby << "\tDruh: " << druh << endl;
	}
};


int main() {
	Zbozi obj0;
	obj0.set("Tuzka", 5);
	obj0.get();


	Elektronika obj1;
	obj1.set("TV", 8000, 100);
	obj1.get();

	Potraviny obj2;
	obj2.set("Hrusek", 8, 3);
	obj2.get();

	Pecivo obj3;
	obj3.set("Rohlik", 3, 1, "svetly");
	obj3.get();

	return 0;
}