#ifndef AGENDA_H
#define AGENDA_H
#include <vector>
#include "Abonat.h"

class Agenda
{
    private:
        vector<Abonat> Lista;
    public:
        Agenda();
        Agenda(Agenda &x);
        Agenda(Abonat &x);
        friend istream &operator>> (istream &is, Agenda &x);
        friend ostream &operator<< (ostream &os, Agenda &x);
        const Agenda& operator= (const Agenda &x);
        void add(Abonat &x);
        Abonat operator[](string x);
        ~Agenda();
};

#endif
