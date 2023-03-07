#include <iostream>
using namespace std;

void funkceVoid() {                                 //deklarace
    cout << "funkce void byla spustena" << endl;    //definice
}

void funkceParametry(string text, int data, int data2) {
    cout << text << endl;
    cout << data << endl;
    cout << data2 << endl;
}

void funkceVychozi(string text = "tento text se vypise pokud je funkce zadana bez parametru") {
    cout << text << endl;
}

int funkceNavratova(double desetinneCislo) {
    return floor(desetinneCislo); //floor = zaokrouhleni dolu
}

void funkceProhozeniPromennych(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int funkcePretizeni(int a, int b) {
    return a + b;
}

double funkcePretizeni(double a, double b) {
    return a + b;
}

int funkceRekurzivni(int a) {
    if (a > 1)
    {
        return a * funkceRekurzivni(a - 1);
    }
    else {
        return 1;
    }
}

int main()
{
    //------Zakladni funkce------

    funkceVoid();
    funkceParametry("jesiahiowa", 6, 8);
    funkceVychozi("pokusny text");
    funkceVychozi();
    
    double cislo = funkceNavratova(7.8);
    cislo *= 10;
    cout << cislo << endl;
    

    //------Prohozeni promennych------

    int a = -15;
    int b = 330;
    cout << "Pred prohozenim: " << a << " " << b << endl;
    funkceProhozeniPromennych(a, b);
    cout << "Po prohozeni: " << a << " " << b << endl;

    //------Pretezovani funkci------
    cout << "Pretizeni funkce secteni int " << funkcePretizeni(3, 8) << endl;
    cout << "Pretizeni funkce secteni double " << funkcePretizeni(3.7, 8.4) << endl;

    //------Rekurze------
    int vysledek = funkceRekurzivni(10);
    cout << "Vysledek faktorialu 10 je: " << vysledek;

    return 0;
}