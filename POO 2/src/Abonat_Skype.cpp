#include "Abonat_Skype.h"

Abonat_Skype::Abonat_Skype():Abonat(){}

Abonat_Skype::Abonat_Skype(const Abonat_Skype &x):Abonat(x){
    id_skype=x.id_skype;
    /*cout<<"\n  copy-Abonat_Skype";*/}

Abonat_Skype::Abonat_Skype(int idc, string numec, int nr_telefonc, int id_skypec)
    :Abonat(idc, numec, nr_telefonc),
    id_skype(id_skypec){}

istream &operator>> (istream &is, Abonat_Skype &x){
    Abonat &y=x;
    is>>y;
    is>>x.id_skype;
    return is;}

ostream &operator<< (ostream &os, Abonat_Skype &x){
    Abonat &y=x;
    os<<y;
    os<<"\n  ID Skype: "<<x.id_skype;
    return os;}

const Abonat_Skype& Abonat_Skype::operator= (const Abonat_Skype &x){
    id=x.id;
    nume=x.nume;
    nr_telefon=x.nr_telefon;
    id_skype=x.id_skype;
    /*cout<<"  = Abonat_Skype\n\n";*/
    return (*this);}

void Abonat_Skype::print(){
    cout<<"\n"<<id<<" "<<nume<<" "<<nr_telefon<<" "<<id_skype;}

Abonat_Skype::~Abonat_Skype(){
    /*cout<<"\n  ~Abonat_Skype";*/}
