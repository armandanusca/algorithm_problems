#include <bits/stdc++.h>
#define nmax 30005

using namespace std;

inline void BFS();

queue < pair <int,int> > q;
vector <int> v[nmax];
int cost[nmax],n,m,x,y;

int main()
{
    int in,out,c;
    ios_base::sync_with_stdio(false);
    ifstream fin("sate.in");
    fin>>n>>m>>x>>y;
    for(int i=0;i<m;i++){
        fin>>out>>in>>c;
        v[out].push_back(make_pair(in,c));
        v[in].push_back(make_pair(out,c));
    }
    BFS();
    ofstream fout("sate.out");
    fout<<cost[y]<<'\n';
    fout.close();
    fin.close();
    return 0;
}

inline void BFS(){
    for(int i=0;i<=n;i++)
        cost[i]=-1;
    q.push(make_pair(x,0));
    cost[x]=0;
    while(!q.empty()){
        int nod=q.front().first;
        int cst=q.front().second;
        q.pop();
        for(int i=0;i<v[nod].size();i++){
            if(cost[v[nod][i].first]==-1||cost[v[nod][i].first]>cost[nod]+cst){
                cost[v[nod][i].first]=cost[nod]+cst;
                if()
            }
        }
    }
}
