#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar==0) return 0;

    unsigned int suma = 0;
    unsigned int nZaglowce = 0;

    while (1){
        Stocznia stocznia{};
        Statek* s1 = stocznia();
        if(dynamic_cast<Zaglowiec*>(s1)) ++nZaglowce;
        unsigned int newTowar = s1->transportuj();
        delete s1;
        suma+=newTowar;
        if (suma>=towar) {return nZaglowce;}
    }

}