#include <iostream>
#include <cstring>

using namespace std;

char sir[100], carnat[100], solutie[100];

int main()
{
    int lg,k,cuculet;
    bool b=0;
    cin.get(carnat,100);
    char *p;
    p=strtok(carnat," ");
    while(p)
          {
           strcpy(sir,p);
           lg=strlen(sir);
           if((lg%2==1)&&(lg>=3))
              {b=1;
              //tai litera din mijloc
               sir[lg/2]=0;
               strcat(sir,sir+lg/2+1);
               strcat(solutie,sir);
               //adaug manual pauza
               cuculet=strlen(solutie);
               solutie[cuculet]=' ';
               solutie[cuculet+1]=0;
              }
               else {strcat(solutie,sir);
                     //adaug manual pauza
                     cuculet=strlen(solutie);
                     solutie[cuculet]=' ';
                     solutie[cuculet+1]=0;
                    }
           //p++;
           p=strtok(NULL," ");
           //restaurez auxiliarul sir
           lg=strlen(sir);
           for(k=0;k<lg;k++)
               sir[k]=0;

          }
//afisare
if(b==0)
    cout<<"nu exista";
   else {
   int lgsol=strlen(solutie);
    for(k=0;k<lgsol-1;k++)
        cout<<solutie[k];
   }
    return 0;
}