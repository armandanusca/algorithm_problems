#include <bits/stdc++.h>
#define MOD 666013

using namespace std;

vector <int> h[MOD];
int n;

void add_value(int val);
void erase_value(int val);
vector<int>::iterator find_value(int val);

int main()
{
    int op,x;
    ifstream fin("hashuri.in");
    ofstream fout("hashuri.out");
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>op>>x;
        if(op==1) add_value(x);
        else if(op==2) erase_value(x);
        else fout<<(bool)(find_value(x)!=h[x%MOD].end())<<'\n';
    }
    fin.close();
    fout.close();
    return 0;
}

void add_value(int val){
    int poz=val%MOD;
    if(find_value(val) == h[poz].end())
        h[poz].push_back(val);
}

void erase_value(int val){
    int poz=val%MOD;
    vector<int>::iterator it = find_value(val);
    if(it != h[poz].end())
        h[poz].erase(it);
}

vector<int>::iterator find_value(int val)
{
    int poz = val % MOD;
    vector<int>::iterator it;
    for (it = h[poz].begin(); it != h[poz].end(); ++it)
        if (*it == val)
            return it;
    return h[poz].end();
}
