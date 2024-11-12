#ifndef FIRSTCLASS_H      // Si FIRSTCLASS_H n'est pas défini
#define FIRSTCLASS_H      // Définir FIRSTCLASS_H pour cette inclusion

#include <string>         // Inclure la bibliothèque string
using namespace std;

class FirstClass {        // Déclaration de la classe
public:
    
    int myNum;
    string myString;

    FirstClass() {

    }

    FirstClass(int myNum, string myString) {

    }

    string toString() {
        return myNum + "  " + myString;
    }
};

#endif                    // Fin de la condition, ignore le reste si déjà inclus
