#include "c.h"
#include <iostream>
using namespace std;
C::C(){
    cout <<"Luotiin olio C" <<endl;
}
C::~C(){
    cout <<"tuhottin olio C"<<endl;
}
void C::valmista() {
    OlioB.kysyOhjeet();
    OlioB.kysyAinekset();
    cout << "C on valmis" <<endl;

}
