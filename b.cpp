#include "b.h"
#include <iostream>

using namespace std;

B::B(){
    cout <<"Luotiin olio B" <<endl;
}
B::~B(){
    cout <<"tuhottin olio B"<<endl;
}

void B::kysyOhjeet(){
    cout << "B:lta kysyttiin ohjeet" <<endl;

}

void B::kysyAinekset(){
    cout<< "B:lta kysyttin ainekset" <<endl;
}
