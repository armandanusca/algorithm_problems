#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
char vocale[]="aeiou",sir[256];

vector <char> chr;

int main()
{
    //char c1;
    //cin.get(c1);
    //cout<<vocale;
    int nrv=0,k;
    cin.get(sir,256);
    int lg=strlen(sir);
    for(k=0;k<lg;k++)
    {
        if(strchr(vocale,sir[k]))
        {nrv++;
            k++;
            while((strchr(vocale,sir[k]))&&(k<lg))
            {nrv++;
                k++;
            }
            if(nrv==1)
            {
                chr.push_back(sir[k-1]);
                chr.push_back(sir[k]);
                nrv=0;
            }
            else {
                chr.push_back(sir[k]);
                nrv=0;}

        }
        else if(!strchr(vocale,sir[k]))
        {nrv=0;
            chr.push_back(sir[k]);
        }
    }
    int sz=chr.size();
    for(int i=0;i<sz-1;i++)
        cout<<chr[i];
    return 0;
}

