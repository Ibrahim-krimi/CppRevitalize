#ifndef FIRSTCLASS_H      // Si FIRSTCLASS_H n'est pas d�fini
#define FIRSTCLASS_H      // D�finir FIRSTCLASS_H pour cette inclusion

#include <string>         // Inclure la biblioth�que string
using namespace std;

class FirstClass {        // D�claration de la classe
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

#endif                    // Fin de la condition, ignore le reste si d�j� inclus
