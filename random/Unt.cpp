#include <fstream>

using namespace std;

ifstream fin("plusminus.in");
ofstream fout("plusminus.out");

int verif();
void gen(int k);
void afisare();

 
int n,v[25],sol[25];;


int main()
{   
    int k;
    fin>>n;
    for(k=1;k<=n;k++)
         v[k]=k*k;
    gen(1);
    return 0;
}

void gen(int k)
{
    if((k==n+1)&&(verif()))
        afisare();
    else{
        sol[k]=1;
        gen(k+1);
        sol[k]=0;
        gen(k+1);
    }
}

int verif()
{   
    int k,S=0;
    for(k=1;k<=n;k++)
    {
        if(sol[k]==1)
            S=S+v[k];
        if(sol[k]==0)
            S=S-v[k];
    }
    if(S==n)
        return 1;
    return 0;
}

void afisare()
{     
    int k;
    for(k=1;k<=n;k++)
        if(sol[k]==1) fout<<"+ ";
        else fout<<"- ";
    fout<<'\n';
}
