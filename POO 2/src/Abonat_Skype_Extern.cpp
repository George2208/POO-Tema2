#include "Abonat_Skype_Extern.h"

Abonat_Skype_Extern::Abonat_Skype_Extern():Abonat_Skype(){}

Abonat_Skype_Extern::Abonat_Skype_Extern(const Abonat_Skype_Extern &x):Abonat_Skype(x){
    tara=x.tara;
    /*cout<<"\n  copy-Abonat_Skype_Extern";*/}

Abonat_Skype_Extern::Abonat_Skype_Extern(int idc, string numec, int nr_telefonc, int id_skypec, string tarac)
    :Abonat_Skype(idc, numec, nr_telefonc, id_skypec),
    tara(tarac){}

istream &operator>> (istream &is, Abonat_Skype_Extern &x){
    Abonat_Skype &y=x;
    is>>y;
    is>>x.tara;
    return is;}

ostream &operator<< (ostream &os, Abonat_Skype_Extern &x){
    Abonat_Skype &y=x;
    os<<y;
    os<<"\n  Tara: "<<x.tara;
    return os;}

const Abonat_Skype_Extern& Abonat_Skype_Extern::operator= (const Abonat_Skype_Extern &x){
    id=x.id;
    nume=x.nume;
    nr_telefon=x.nr_telefon;
    id_skype=x.id_skype;
    tara=x.tara;
    /*cout<<"  = Abonat_Skype_Extern\n\n";*/
    return (*this);}

void Abonat_Skype_Extern::print(){
    cout<<"\n"<<id<<" "<<nume<<" "<<nr_telefon<<" "<<id_skype<<" "<<tara;}

Abonat_Skype_Extern::~Abonat_Skype_Extern(){
    /*cout<<"\n  ~Abonat_Skype_Extern";*/}
