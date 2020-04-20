#ifndef ABONAT_H
#define ABONAT_H
#include "Persoana.h"

class Abonat:virtual public Persoana
{
    protected:
        int nr_telefon=0;
    public:
        Abonat();
        Abonat(const Abonat &x);
        Abonat(int idc, string numec, int nr_telefonc);
        friend istream &operator>> (istream &is, Abonat &x);
        friend ostream &operator<< (ostream &os, Abonat &x);
        const Abonat& operator= (const Abonat &x);
        virtual void print();
        /*int getnr_telefon(){return nr_telefon;}
        void setnr_telefon(int nr_telefonc){nr_telefon=nr_telefonc;}*/
        ~Abonat();
};

#endif
