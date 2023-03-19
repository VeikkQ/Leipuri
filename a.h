#ifndef A_H
#define A_H

#include <string>
#include "b.h"
using namespace std;
class A {
private:
    string nimi;
protected:
    B OlioB;

public:
    A();
    ~A();
    string kysyNimi();
    virtual void valmista() = 0;
};

#endif
