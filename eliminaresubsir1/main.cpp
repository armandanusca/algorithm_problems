#include <iostream>

using namespace std;

char s[255],t[255],ts[255];

inline bool StrCmp(char a[],char b[]){
    int lna,lnb;
    lna=strlen(a);
    lnb=strlen(b);
    if(lna!=lnb) return false;
    for(int i=0;i<lna;i++)
        if(a[i]!=b[i]) return false;
    return true;
}

int main() {
    cin.getline(s,255);
    cin.getline(t,255);
    int lns,lnt,poz;
    lns=strlen(s);
    lnt=strlen(t);
    for(int i=lns-1;i>=lnt-1;i--){
        for(int j=i-lnt;j<i;j++)
            ts[j-i+lnt]=s[j];
        if(StrCmp(t,ts)) {
            poz=i-lnt;
            break;
        }

    }
    for(int i=0;i<lns;i++)
        if(i<poz||i>poz+lnt-1) cout<<s[i];
    return 0;
}