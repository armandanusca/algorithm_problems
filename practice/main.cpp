#include <bits/stdc++.h>

using namespace std;

vector <vector <int> > in,out;
int n,m;

vector <int> SortareT(vector <vector <int> > &in,vector <vector <int> > &out);
void Read();

int main()
{
    ios_base::sync_with_stdio(false);
    ofstream fout("sortaret.out");
    Read();
    in = vector <vector <int> > (n+1, <int>());
    out = vector <vector <int> > (n+1, <int>());
    auto it = SortareT(in,out);
    for(auto i : it)
        fout<<i<<'\n';
    fout.close();
    return 0;
}

void Read(){
    int x,y;
    ifstream fin("sortaret.in");
    fin>>n>>m;
    for(int i=1;i<=m;i++){
        fin>>x>>y;

    }
}
