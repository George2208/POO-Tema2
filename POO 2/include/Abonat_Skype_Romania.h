#ifndef ABONAT_SKYPE_ROMANIA_H
#define ABONAT_SKYPE_ROMANIA_H
#include "Abonat_Skype.h"

class Abonat_Skype_Romania:virtual public Abonat_Skype
{
    protected:
        string adresa_mail="email";
    public:
        Abonat_Skype_Romania();
        Abonat_Skype_Romania(const Abonat_Skype_Romania &x);
        Abonat_Skype_Romania(int id, string numec, int nr_telefonc, int idskypec, string adresa_mailc);
        friend istream &operator>> (istream &is, Abonat_Skype_Romania &x);
        friend ostream &operator<< (ostream &os, Abonat_Skype_Romania &x);
        const Abonat_Skype_Romania& operator= (const Abonat_Skype_Romania &x);
        virtual void print();
        /*string getadresa_mail(){return adresa_mail;}
        void setadresa_mail(string adresa_mailc){adresa_mail=adresa_mailc;}*/
        ~Abonat_Skype_Romania();
};

#endif
