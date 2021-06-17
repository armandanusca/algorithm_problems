#include <bits/stdc++.h>

using namespace std;

struct compConexe {
    int nrComponente;
    int componente[100][100];
};

struct grafListaMuchii{
    int nrNoduri;
    int nrMuchii;
    int muchii[2][500];
};

grafListaMuchii G;
compConexe compConex;
int ordinCompConexe,cnt;
vector <int> v[500];
bool viz[500];

void DFS(int nod){
    viz[nod]=true;
    for(int i=0;i<v[nod].size();i++){
        if(!viz[v[nod][i]])
        {
            compConex.componente[cnt][compConex.componente[cnt][0]++]=v[nod][i];
            DFS(v[nod][i]);
        }
    }
}

compConexe Compconexe(grafListaMuchii graf,int ordinCompConexe){
    for(int i=0;i<G.nrMuchii;i++) {
        v[G.muchii[0][i]].push_back(G.muchii[1][i]);
        v[G.muchii[1][i]].push_back(G.muchii[0][i]);
    }
    for(int i=1;i<=G.nrNoduri;i++){
        cnt++;
        DFS(i);
    }

}



int main() {
    int n,m;
    freopen("arbore.in","r",stdin);
    freopen("arbore.out","w",stdout);
    cin>>n>>m;
    G.nrNoduri=n;
    G.nrMuchii=m;
    for(int i=0;i<m;i++)
        cin>>G.muchii[0][i]>>G.muchii[1][i];
    cin>>ordinCompConexe;
    Compconexe(G,ordinCompConexe);
    return 0;
}

