#include <iostream>
#include <string>
using namespace std;

//------D�di�nost------

class Zbozi {
public:
	string nazev;
	int cena;
};

class Elektronika : public Zbozi {
public:
	int spotreba;
};

class DomaciVyroba { //DomaciVyroba musi b�t definov�na v�dy p�ed potomkem!
public:
	void zjistitVyrobu() {
		cout << "Domaci vyroba" << endl;
	}
};

class Potraviny : public Zbozi, public DomaciVyroba { // V�cen�sobn� d�di�nost
public:
	int datumSpotreby;
};

class Pecivo : public Potraviny { // V�ce�rov�ov� d�di�nost
public:
	string druh;
};





int main() {
	Potraviny obj1;
	obj1.nazev = "Vajico";
	obj1.cena = 5;
	obj1.datumSpotreby = 10;
	obj1.zjistitVyrobu();

	Elektronika obj2;
	obj2.nazev = "Sporak";
	obj2.cena = 12000;
	obj2.spotreba = 5000;

	Pecivo obj3;
	obj3.nazev = "Rohlik";
	obj3.cena = 3;
	obj3.datumSpotreby = 1;
	obj3.druh = "slany";

	cout << obj3.nazev;

	return 0;
}