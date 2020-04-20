#include "Persoana.h"

Persoana::Persoana(){}

Persoana::Persoana(const Persoana &x){
    id=x.id;
    nume=x.nume;
    /*cout<<"\n  copy-Persoana";*/}

Persoana::Persoana(int idc, string numec){
    id=idc;
    nume=numec;}

istream &operator>> (istream &is, Persoana &x){
    is>>x.id>>x.nume;
    return is;}

ostream &operator<< (ostream &os, const Persoana &x){
    os<<"\n  ID: "<<x.id;
    os<<"\n  Nume: "<<x.nume;
    return os;}

const Persoana& Persoana::operator= (const Persoana &x){
    id = x.id;
    nume = x.nume;
    /*cout<<"  = Persoana\n\n"*/;
    return (*this);}

void Persoana::print(){
    cout<<"\n"<<id<<" "<<nume;}

Persoana::~Persoana(){
    /*cout<<"\n  ~Persoana";*/}
