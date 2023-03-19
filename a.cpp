#include "a.h"
#include <iostream>
using namespace std;

A::A() {
    cout << "Luotiin olio A" << endl;
}

A::~A() {
    cout << "tuhottiin olio A" <<endl;
}

string A::kysyNimi() {
   cout << "Leipuri";
    return nimi;
}
