#include <iostream>  // necaissaire pour les entrees et les sorties cout cin
#include <string>
using namespace std; // c'est une facon de eviter de devoir prefixer les objet standar avc std::

int main2() {
	string hello;
	cout << "saisie qlq chose : " << "\n";
	getline(cin,hello);
	cout << "Your number is : " << hello;
	return 0;
}