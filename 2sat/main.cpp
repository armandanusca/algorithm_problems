#include <bits/stdc++.h>
#define nmax 100005


using namespace std;

int n,m;
vector <int> rel[2*nmax+5];
vector <int> irel[2*nmax+5];
int comp [2*nmax+5];
vector <int> lst , comp_val;
bool viz [2*nmax+5];
bool sol[nmax+5];

#define rel (rel+nmax)
#define irel (irel+nmax)
#define viz (viz+nmax)
#define comp (comp+nmax)

vector <int> range(int low,int high){
    vector <int> t;
    for(int i=low;i<=high;i++){
        t.push_back(i);
    }
    return t;
}

void DFS(int nod){
    if(viz[nod]) return;
    viz[nod]=true;
    for(auto it: rel[nod])
         DFS(it);
    lst.push_back(nod);
}

void Assign(int nod,int cmp){
    if(comp[nod]) return;
    comp[nod]=cmp;
    for(auto it: irel[nod])
        Assign(it,cmp);
}


bool SAT2(){
    for(int i=-n;i<=n;i++)
        DFS(i);
    int t=0;
    comp_val.push_back(0);
    for(int i=lst.size()-1;i>-1;i--){
        if(comp[lst[i]]) continue;
        comp_val.push_back(0);
        Assign(lst[i],++t);
    }
    for(int i=1;i<=n;i++){
        if(comp[i]==comp[-i])
        return false;
        else if(comp[i]>comp[-i]) comp_val[comp[i]]=1;
        else if(comp[-i]>comp[i]) comp_val[comp[-i]]=1;
    }
    for(int i=1;i<=n;i++)
        sol[i]=comp_val[comp[i]];
    return true;
}


int main()
{
    int x,y;
    ios_base::sync_with_stdio(false);
    ifstream fin("2sat.in");
    fin>>n>>m;
    for(int i=1;i<=m;i++){
        fin>>x>>y;
        rel[-x].push_back(y);
        rel[-y].push_back(x);
        irel[x].push_back(-y);
        irel[y].push_back(-x);
    }
    ofstream fout("2sat.out");
    if(SAT2())
        for(auto i : range(1,n))
            fout<<sol[i]<<' ';
    else fout<<"-1";
    fout<<'\n';
    fout.close();
    fin.close();
    return 0;
}
