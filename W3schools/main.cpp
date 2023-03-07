#include <iostream>
#include <string>
using namespace std;

int main() {

	//------Vypsání více promìnných do konzole------

	//char a = 'A';
	//string b = "Tohle je string";
	//cout << a  << "\t" << b << endl;
	//
	//int x = 7;
	//int y = 4;
	//const int z = 25;

	//cout << x / y << endl << z << endl;


	//------Scaner------

	//int k, l, m;

	//cout << "Cislo 1:\t";
	//cin >> k;
	//cout << "Cislo 2:\t";
	//cin >> l;
	//m = k * l;
	//cout << "Vysledek\t" << m + k + l;

	//string text;
	//getline(cin, text);
	//cout << "napsany text: \n" << text << endl <<"delka: " << text.length();


	////------Pole------

	//int myNumbers[5] = { 10, 20, 30, 40, 50 }; //velikost pole [5] není potøeba urèit 
	//for (int i : myNumbers) {
	//	cout << i << "\n";
	//}
	//cout << "Velikost pole v bytech je: " << sizeof(myNumbers) <<endl;

	////														    dat typ pole myNumbers
	//cout << "Pocet elementu v poli je: " << sizeof(myNumbers) / sizeof(int) <<endl;

	////------Vícerozmìrné pole------
	//string letters[2][4] = {
	//	{ "A", "B", "C", "D" },
	//	{ "E", "F", "G", "H" }
	//};

	////Výpis druhého øádku tøetího sloupce
	//cout <<letters[1][2]<<endl;

	////pøi vypisu všech hodnot je nutné ve for udat velikost pole jako i a j
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << letters[i][j] << endl;
	//	}
	//}

	return 0;
}
