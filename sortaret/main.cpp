#include <bits/stdc++.h>

using namespace std;

int n,m;
vector <vector <int> > in,out;

vector <int> SortT(vector <vector <int> > &in, vector <vector <int> > &out);

int main()
{
    int x,y;
    ios_base::sync_with_stdio(false);
    ifstream fin("sortaret.in");
    fin>>n>>m;
    out=vector <vector <int> > (n+1,vector <int>());
    in=vector <vector <int> > (n+1,vector <int>());
    for(int i=0;i<m;i++){
        fin>>x>>y;
        out[x].push_back(y);
        in[y].push_back(x);
    }
    auto res=SortT(in,out);
    ofstream fout("sortaret.out");
    for(auto it: res){
            fout<<it<<' ';
    }
    return 0;
}

vector <int> SortT(vector <vector <int> > &in, vector <vector <int> > &out){
    vector <bool> viz;
    vector <int> lst;
    queue <int> q;
    viz = vector <bool> (in.size(),0);
    for(int i=1;i<=in.size();i++)
        if(in[i].size()==0) {
                q.push(i);
                viz[i]=true;
        }
    while(!q.empty()){
        int nod=q.front();
        q.pop();
        lst.push_back(nod);
        for(auto it : out[nod]){
            if(viz[it]) continue;
            bool ok=true;
            for(auto nod_in : in[it])
                if(!viz[nod_in]){
                    ok=false;
                    break;
            }
            if(ok){
                viz[it]=true;
                q.push(it);
            }
        }
    }
    return lst;
}
