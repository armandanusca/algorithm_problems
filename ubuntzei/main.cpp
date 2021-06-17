#include <fstream>
#include <iostream>
#include <utility>
#include <algorithm>
#include <set>
#include <climits>
#include <cmath>
#include <vector>
#define nmax 250005

using namespace std;

vector < pair <int,int> > v[nmax];
set <pair <int,int> > q;
int n,m;
int d[nmax][19];
int dp[19][1<<17];
int k_val[19];
int k;

void Push(int,int,int);
void Dijkstra(int,int);
int Btk(int i,int conf);

int main(){
  ios_base::sync_with_stdio(false);
  int x,y,cost;
  ifstream cin("ubuntzei.in");
  ofstream cout("ubuntzei.out");
  cin>>n>>m;
  cin>>k;
  for(int i=0;i<k;i++)
    cin>>k_val[i];
  for(int i=0;i<m;i++){
    cin>>x>>y>>cost;
    v[x].push_back(make_pair(y,cost));
    v[y].push_back(make_pair(x,cost));
  }
  int vl=(1<<17);
  for(int i=0;i<19;i++)
    for(int j=0;j<vl;j++)
      dp[i][j]=INT_MAX;
  for(int i=0;i<k;i++)
    Dijkstra(i, k_val[i]);
  Dijkstra(k, 1);
  Dijkstra(k+1, n);
  if(k==0){
    cout<<d[1][1];
    return 0;
    }

  int conf =(1<<k)-1;
  bool mnnotset=true;
  int mn=999999;
    for(int i = 0 ; i<k;i++)
    {
      int val = Btk(i,conf-(1<<i))+d[k_val[i]][k+1];
      if(mnnotset || val<mn){
    mnnotset=false;
    mn=val;
      }
    }
  cout<<mn<<'\n';
  cout.close();
  cin.close();
  return 0;
}

inline void Push(int x,int new_d, int loc){
  set <pair <int,int> > ::iterator it=q.find(make_pair(d[x][loc],x));
  if(it!=q.end()) q.erase(it);
  q.insert(make_pair(new_d,x));
  d[x][loc]=new_d;
}


inline void Dijkstra(int loc, int now){
  for(int i=0;i<=n;i++)
    d[i][loc]=INT_MAX;
  Push(now,0, loc);
  while(!q.empty()){
    now=q.begin()->second;
    q.erase(q.begin());
    for(int i=0;i<v[now].size();i++){
      int next=v[now][i].first;
      int cost=v[now][i].second;
      if(d[now][loc]+cost<d[next][loc])
        Push(next,d[now][loc]+cost,loc);
    }
  }
}

int Btk(int i,int conf){
  if(conf==0)
    return d[k_val[i]][k];
  if(dp[i][conf]<INT_MAX)
    return dp[i][conf];
  int pw=1;
  for(int j=0;j<k;j++,pw*=2){
    if(conf&pw){
      int new_val=Btk(j,conf-pw)+d[k_val[j]][i];
      dp[i][conf]=min(dp[i][conf],new_val);
    }
  }
  return dp[i][conf];
}
