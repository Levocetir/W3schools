#include <iostream>
#include <string>
using namespace std;


//------Struktury------

struct obcan {
	string jmeno;
	int vek;
	bool schopny;
};

int main() {

	obcan a;
	a.jmeno = "Jan";
	a.vek = 55;
	a.schopny = true;

	cout << a.jmeno << endl << a.vek << endl << a.schopny << endl << endl;

	obcan b;
	b.jmeno = "Jana";
	b.vek = 22;
	b.schopny = false;

	cout << b.jmeno << endl << b.vek << endl << b.schopny << endl << endl;

	//------Reference a Poiter------
	string food = "Pizza";
	string& meal = food;

	cout << food << "\n";
	cout << meal << "\n";

	cout << "Adresa pameti: " << &food << "\n";

	string* ptr = &food;
	cout << "Hodnota promenne ptr: " << *ptr << endl;
	cout << "Adresa pameti promenne ptr: " << ptr << endl;

	*ptr = "Hamburger"; //zmení se jak hodnota promenne ptr tak promenne food
	cout << *ptr << endl;
	cout << food;


	return 0;
}

