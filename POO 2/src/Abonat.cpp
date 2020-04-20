#include "Abonat.h"

Abonat::Abonat()
    :Persoana(){}

Abonat::Abonat(const Abonat &x):Persoana(x){
    nr_telefon=x.nr_telefon;
    /*cout<<"\n  copy-Abonat";*/}

Abonat::Abonat(int idc, string numec, int nr_telefonc)
    :Persoana(idc, numec),
    nr_telefon(nr_telefonc){}

istream &operator>> (istream &is, Abonat &x){
    Persoana &y=x;
    is>>y;
    is>>x.nr_telefon;
    return is;}

ostream &operator<< (ostream &os, Abonat &x){
    Persoana &y=x;
    os<<y;
    os<<"\n  NR. tel: "<<x.nr_telefon;
    return os;}

const Abonat& Abonat::operator= (const Abonat &x){
    id=x.id;
    nume=x.nume;
    nr_telefon=x.nr_telefon;
    /*cout<<"  = Abonat\n\n";*/
    return (*this);}

void Abonat::print(){
    cout<<"\n"<<id<<" "<<nume<<" "<<nr_telefon;}

Abonat::~Abonat(){
    /*cout<<"\n  ~Abonat";*/}
