#include "Persoana.h"
#include "Abonat.h"
#include "Abonat_Skype.h"
#include "Abonat_Skype_Romania.h"
#include "Abonat_Skype_Extern.h"
#include "Agenda.h"

using namespace std;

int main()
{
    int n; Abonat x; Agenda v;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v;
    cout<<v;
    return 0;
}
