//
//  main.cpp
//  expand
//
//  Created by Leonard Anusca on 18/02/2017.
//  Copyright © 2017 Aaron. All rights reserved.
//

#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#define nmax 30

using namespace std;

string obt,rez,cpy,st,v[nmax][17],rep;
int n,a[nmax],mn=999;
char c;

inline void BTK(int top);

int main() {
    ios_base::sync_with_stdio(false);
    ifstream fin("expand.in");
    ofstream fout("expand.out");
    fin>>obt;
    fin>>rez;
    fin>>n;
    while(n--){
        fin>>c;
        fin>>st;
        int poz=c-'a';
        a[poz]++;
        v[poz][a[poz]]=st;
    }
    BTK(0);
    fout<<mn<<'\n';
    fout.close();
    fin.close();
    return 0;
}


inline void BTK(int top){
    string save;
    if(obt.size()>rez.size()) return;
    if(rez==obt){
        mn=min(top,mn);
    }
    for(int i=0;i<obt.size();i++){
        int now=obt[i]-'a';
        for(int j=1;j<=a[now];j++){
            string save=obt;
            rep=v[now][j];
            for(int k=0;k<rep.size();k++){
                obt.insert(obt.begin()+i+1+k,rep[k]);
            }
            obt.erase(obt.begin()+i);
            BTK(top+1);
            obt=save;
        }
    }
}
