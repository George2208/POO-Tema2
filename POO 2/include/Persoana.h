#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>
#include <string>
using namespace std;

class Persoana
{
    protected:
        int id=0;
        string nume="nume";
    public:
        Persoana();
        Persoana(const Persoana &x);
        Persoana(int idc, string numec);
        friend istream &operator>> (istream &is, Persoana &x);
        friend ostream &operator<< (ostream &os, const Persoana &x);
        const Persoana& operator= (const Persoana &x);
        virtual void print();
        /*int getid(){return id;}
        void setid(int idc){id=idc;}*/
        string getnume(){return nume;}
        /*void setnume(string numec){nume=numec;}*/
        ~Persoana();
};

#endif
