#include <bits/stdc++.h>
#define nmax 100005
using namespace std;

vector <int> a[nmax];
int cost[nmax];
int n,m,s;
queue <int> q;

inline void BFS();

int main()
{
    int x,y;
    ios_base::sync_with_stdio(false);
    ifstream fin("bfs.in");
    fin>>n>>m>>s;
    for(int i=0;i<m;i++){
        fin>>x>>y;
        a[x].push_back(y);
    }
    for(int i=1;i<=n;i++)
        cost[i]=-1;
    cost[s]=0;
    BFS();
    ofstream fout("bfs.out");
    for(int i=1;i<=n;i++)
        fout<<cost[i]<<' ';
    fout<<'\n';
    fout.close();
    fin.close();
    return 0;
}

inline void BFS(){
    q.push(s);
    cout<<s<<'\n';
    while(!q.empty()){
        int nod=q.front();
        q.pop();
        for(auto it:a[nod]){
            if(cost[it]==-1||cost[nod]+1<cost[it]){
                cost[it]=cost[nod]+1;
                q.push(it);
            }
        }
    }
}
