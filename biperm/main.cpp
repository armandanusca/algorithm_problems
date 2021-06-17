#include <iostream>
#include <fstream>
#define NMAX 10005
using namespace std;

int n,biper[2][NMAX],frecv[NMAX];
pair <bool , int > a[NMAX];

void Reset(){
    pair <bool, int> null=make_pair(false,-1);
    for(int i=0;i<=n;i++)
        a[i]=null;
}

bool Check(){
    bool f[NMAX];
    for(int i=0;i<=n;i++)
        f[i]=false;
    for(int i=0;i<n;i++)
        if(f[biper[0][i]]) return false;
        else f[biper[0][i]]=true;
    return true;
}

void Perm(){
    int k=0;
    int var1,var2;
    while(k<n){
        var1=biper[0][k];
        var2=biper[1][k];
        if(!a[var1].first){
            a[var1].first=true;
            a[var1].second=k;
            k++;
            continue;
        }
        else if(!a[var2].first){
            swap(biper[0][k],biper[1][k]);
            Reset();
            return;
        } else {
            int lstpos=a[var1].second;
            swap(biper[0][lstpos],biper[1][lstpos]);
            Reset();
            return;
        }
    }
}

int main() {
    ifstream fin("biperm.in");
    ofstream fout("biperm.out");
    fin>>n;
    for(int i=0;i<n;i++)
        fin>>biper[0][i];
    for(int i=0;i<n;i++)
        fin>>biper[1][i];
    int cnt=0;
    while(!Check()){
        Perm();
        cnt++;
    }
    if(cnt>n/2) cnt=n-cnt;
    fout<<cnt<<'\n';
    for(int i=0;i<n;i++)
        fout<<biper[0][i]<<' ';
    fout<<"\n";
    for(int i=0;i<n;i++)
        fout<<biper[1][i]<<' ';
    fout<<"\n";
    fout.close();
    return 0;
}