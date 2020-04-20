#include "Abonat_Skype_Romania.h"

Abonat_Skype_Romania::Abonat_Skype_Romania():Abonat_Skype(){}

Abonat_Skype_Romania::Abonat_Skype_Romania(const Abonat_Skype_Romania &x):Abonat_Skype(x){
    adresa_mail=x.adresa_mail;
    /*cout<<"\n  copy-Abonat_Skype_Romania";*/}

Abonat_Skype_Romania::Abonat_Skype_Romania(int idc, string numec, int nr_telefonc, int idskypec, string adresa_mailc)
    :Abonat_Skype(idc, numec, nr_telefonc, idskypec),
    adresa_mail(adresa_mailc){}

istream &operator>> (istream &is, Abonat_Skype_Romania &x){
    Abonat_Skype &y=x;
    is>>y;
    is>>x.adresa_mail;
    return is;}

ostream &operator<< (ostream &os, Abonat_Skype_Romania &x){
    Abonat_Skype &y=x;
    os<<y;
    os<<"\n  Email: "<<x.adresa_mail;
    return os;}

const Abonat_Skype_Romania& Abonat_Skype_Romania::operator= (const Abonat_Skype_Romania &x){
    id=x.id;
    nume=x.nume;
    nr_telefon=x.nr_telefon;
    id_skype=x.id_skype;
    adresa_mail=x.adresa_mail;
    /*cout<<"  = Abonat_Skype_Romania\n\n"*/;
    return (*this);}

void Abonat_Skype_Romania::print(){
    cout<<"\n"<<id<<" "<<nume<<" "<<nr_telefon<<" "<<id_skype<<" "<<adresa_mail;}

Abonat_Skype_Romania::~Abonat_Skype_Romania(){
    /*cout<<"\n  ~Abonat_Skype_Romania";*/}
