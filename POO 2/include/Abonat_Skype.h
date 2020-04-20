#ifndef ABONAT_SKYPE_H
#define ABONAT_SKYPE_H
#include "Abonat.h"

class Abonat_Skype:virtual public Abonat
{
    protected:
        int id_skype=0;
    public:
        Abonat_Skype();
        Abonat_Skype(const Abonat_Skype &x);
        Abonat_Skype(int idc, string numec, int nr_telefonc, int id_skypec);
        friend istream &operator>> (istream &is, Abonat_Skype &x);
        friend ostream &operator<< (ostream &os, Abonat_Skype &x);
        const Abonat_Skype& operator= (const Abonat_Skype &x);
        virtual void print();
        /*int getid_skype(){return id_skype;}
        void setid_skype(int id_skypec){id_skype=id_skypec;}*/
        ~Abonat_Skype();
};

#endif
