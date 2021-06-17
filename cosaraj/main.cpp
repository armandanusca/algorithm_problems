#include <bits/stdc++.h>

using namespace std;

vector <int> lst,comp;
vector <vector <int> > in,out,compt;
int n,m;
vector <bool> viz;

void DFS(int nod){
    if(viz[nod]) return;
    viz[nod]=true;
    for(auto it: out[nod])
         DFS(it);
    lst.push_back(nod);
}

void Assign(int nod,int cmp){
    if(comp[nod]) return;
    comp[nod]=cmp;
    compt.back().push_back(nod);
    for(auto it: out[nod])
        Assign(it,cmp);
}

int main()
{
    int x,y;
    ios_base::sync_with_stdio(false);
    ifstream fin("sortaret.in");
    fin>>n>>m;
    in = vector < vector <int> > (n+1 , vector <int>());
    out = vector <vector <int> > (n+1 , vector <int>());
    viz = vector <bool> (n+1,0);
    comp = vector <int> (n+1,0);
    for(int i=1;i<=m;i++){
        fin>>x>>y;
        in[y].push_back(x);
        out[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
        DFS(i);
    int t=0;
    for(auto it : lst)
    {
        if(comp[it]) continue;
        compt.push_back(vector <int>());
        Assign(it,++t);
    }
    ofstream fout("sortaret.out");
    for(int i=t-1;i>=0;i--)
        {
            for(auto it : compt[i])
                fout<<it<<' ';
        }
    fout.close();
    return 0;
}
