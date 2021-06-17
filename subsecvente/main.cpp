#include <iostream>
#include <fstream>

using namespace std;

string s1,s2;

int main() {
    ifstream cin("subsecventa.in");
    ofstream cout("subsecvente.out");
    cin>>s1;
    cin>>s2;
    if(s1.length()<s2.length()){
        cout<<"0\n";
        return 0;
    }
    int zeros=0;
    int secvmic=0;
    for(int i=0;i<s1.length();i++)
        if(s1[i]=='0') zeros++;
    for(int i=1;i<s2.length();i++)
        secvmic+=s1.length()-i-zeros+1;
    int ind=-1;
    int nreq=0;
    while (ind+s2.length()<=s1.length()) {
        ind++;
        if(nreq==s2.length()) {
            nreq--;
            //secvmic++;
        }
        if(s1[ind]==s2[0]) {
            nreq++;
            continue;
        }
        if(s1[ind]>s2[0]){
            nreq=0;
            continue;
        }
        if(s1[ind]<s2[0]){
            if(s1[ind]=='0') secvmic--;
            secvmic+=nreq;
            if(ind<s1.length()-s2.length()) secvmic++;
            nreq=0;
        }
    }
    cout<<secvmic<<'\n';
    return 0;
}
