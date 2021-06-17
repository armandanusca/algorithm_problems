#include <bits/stdc++.h>
#define nmax 7505

using namespace std;

inline void BFS(int x,int dist[]);
int n,m;
int a[2][nmax];
vector <int> t[nmax],v[nmax],sol;
queue <int> q;

int main()
{
    int x,y,in,out;
    ios_base::sync_with_stdio(false);
    ifstream fin("graf.in");
    fin>>n>>m;
    fin>>x>>y;
    for(int i=1;i<=m;i++){
        fin>>out>>in;
        v[in].push_back(out);
        v[out].push_back(in);
    }
    BFS(x,a[1]);
    BFS(y,a[2]);
    for(int i=1;i<=n;i++)
        if(a[1][i]+a[2][i]==a[1][y]&&a[2][i]!=0&&a[1][i]!=-1) t[a[1][i]].push_back(i);
    sol.push_back(x);
    sol.push_back(y);
    for(int i=1;i<=n;i++)
            if(t[i].size()==1) sol.push_back(t[i].front());
    ofstream fout("graf.out");
    int lng=sol.size();
    fout<<lng<<'\n';
    sort(sol.begin(),sol.end());
    for(auto it:sol)
        fout<<it<<' ';
    fout.close();
    fin.close();
    return 0;
}

inline void BFS(int x,int dist[]){
    for(int i=0;i<=n;i++)
        dist[i]=-1;
    q.push(x);
    dist[x]=0;
    while(!q.empty()){
        int nod=q.front();
        q.pop();
        for(auto it:v[nod])
        if(dist[it]==-1||dist[it]>dist[nod]+1){
            dist[it]=dist[nod]+1;
            q.push(it);
        }
    }
}
