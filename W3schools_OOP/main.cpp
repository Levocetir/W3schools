#include <iostream>
#include <string>
using namespace std;

class Auto {
public:
    string nazev;   //atributy
    int rokVyroby;
    bool funkcni;
    
};


class TridaMetody
{
public:
    void zdarPrvniMoznost() {
        cout << "Zdar prvni moznost" << endl;
    }


    void zdarDruhaMoznost();
};

void TridaMetody::zdarDruhaMoznost() {
    cout << "Zdar druha moznost" << endl;
}


//------Konstruktor------

class AutoK
{
public:
    string nazevK;   //atributy
    int rokVyrobyK;
    bool funkcniK;

    AutoK(string a, int b, bool c) {
        nazevK = a;
        rokVyrobyK = b;
        funkcniK = c;
    }

    void vypis() {
        cout << nazevK << "\t" << rokVyrobyK << "\t" << funkcniK << endl;
    }

};

//-----------------------

//------Zapouzdøení------
class Produkt {
private:
    string nazev;
    int pocet;
    double hmotnost;
    
public:
    // Setter
    void setNazev(string s) {
        nazev = s;
    }
    void setPocet(int i) {
        pocet = i;
    }
    void setHmotnost(double d) {
        hmotnost = d;
    }

    // Getter
    string getNazev() {
        return nazev;
    }
    int getPocet() {
        return pocet;
    }
    double getHmotnost(){
        return hmotnost;
    }


    double celkHmotnost() {
        return pocet * hmotnost;
    }
};

//-----------------------


int main() {
    Auto objAuto1; //vytvoøení objektu auto

    objAuto1.nazev = "BMW";
    objAuto1.rokVyroby = 2000;
    objAuto1.funkcni = true;

    Auto objAuto2;
    objAuto2.nazev = "Skoda";
    objAuto2.rokVyroby = 1999;
    objAuto2.funkcni = false;

    cout << "Nazev: " << objAuto1.nazev << endl;
    cout << "rok vyroby: " << objAuto1.rokVyroby << endl;
    cout << "Funkcni: " << objAuto1.funkcni << endl;


    //------Konstruktor------

    AutoK objAutoK1("Ford", 1969, 0);
    AutoK objAutoK2("Zajac", 123, true);

    objAutoK1.vypis();
    objAutoK2.vypis();

    //-----------------------

    //------Zapouzdøení------

    Produkt objProdukt1;
    objProdukt1.setNazev("Jablko");
    objProdukt1.setPocet(33333);
    objProdukt1.setHmotnost(0.233);

    cout << "Název produktu: " << objProdukt1.getNazev() << endl;
    cout << "Pocet produktu: " << objProdukt1.getPocet() << endl;
    cout << "Hmotnost produktu: " << objProdukt1.getHmotnost() << endl;
    cout << "Celkova hmotnost produktu: " << objProdukt1.celkHmotnost() << endl;

    return 0;
}
