#ifndef ABONAT_SKYPE_EXTERN_H
#define ABONAT_SKYPE_EXTERN_H
#include "Abonat_Skype.h"

class Abonat_Skype_Extern:virtual public Abonat_Skype
{
    protected:
        string tara="tara";
    public:
        Abonat_Skype_Extern();
        Abonat_Skype_Extern(const Abonat_Skype_Extern &x);
        Abonat_Skype_Extern(int idc, string numec, int nr_telefonc, int id_skypec, string tarac);
        friend istream &operator>> (istream &is, Abonat_Skype_Extern &x);
        friend ostream &operator<< (ostream &os, Abonat_Skype_Extern &x);
        const Abonat_Skype_Extern& operator= (const Abonat_Skype_Extern &x);
        virtual void print();
        /*string gettara(){return tara;}
        void settara(string tarac){tara=tarac;}*/
        virtual ~Abonat_Skype_Extern();
};

#endif
