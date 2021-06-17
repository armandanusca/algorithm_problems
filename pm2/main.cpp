#include <bits/stdc++.h>

using namespace std;

struct info{
    int l=0,start=0,delay=0;
    info(){
        l=0;
        start=0;
        delay=0;
    }
};

int n,y,x;
vector <info> inf;
vector <vector <int> > in,out;

inline void Read();
int SortT(vector <vector <int> > &in, vector <vector <int> > &out,vector <info> &inf);

int main()
{
    ios_base::sync_with_stdio(false);
    Read();
    ofstream fout("pm2.out");
    fout<<SortT(in,out,inf)<<'\n';
    for(auto nod : inf)
        fout<<nod.start<<' '<<nod.delay+nod.start<<'\n';
    fout.close();
    return 0;
}

inline void Read(){
    int i,j,x;
    ifstream fin("pm2.in");
    fin>>n;
    in = vector <vector <int> > (n+1,vector<int>());
    out = vector <vector <int> > (n+1,vector<int>());
    inf = vector <info> (n+1,info());

    for(i=1;i<=n;i++)
        fin>>inf[i].l;
    for(i=1;i<=n;i++){
        fin>>x;
        for(j=1;j<=x;j++){
            fin>>y;
            in[i].push_back(y);
            out[y].push_back(i);
        }
    }
    fin.close();
}

int SortT(vector <vector <int> > &in, vector <vector <int> > &out,vector <info> &inf){
    vector <int> viz;
    vector <int> lst;
    queue <int> q;
    viz = vector <int> (in.size(),0);
    for(int i=1;i<(int)in.size();i++)
        if(in[i].size()==0) {
                q.push(i);
                viz[i]=1;
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
                else{
                    int tmp=inf[nod_in].l+inf[nod_in].start;
                    inf[it].start=max(tmp,inf[it].start);
                }
            if(ok){
                viz[it]=viz[nod]+1;
                q.push(it);
            }
            else inf[it].start=0;
        }
    }
    int res=0;
    for(auto curr : inf){
        int tmp=curr.l+curr.start;
        res=max(res,tmp);
    }

    return res;
}
