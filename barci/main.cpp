#include <bits/stdc++.h>
#define nmax 100005

using namespace std;

struct barca{
    long long ant;
    bool ocp;
};

long long v[nmax],n,c,b;
vector <barca> a;

int main()
{
    barca t;
    long long mn,mx,cnt=0;
    ios_base::sync_with_stdio(false);
    ifstream fin("barci.in");
    ofstream fout("barci.out");
    fin>>n>>c>>b;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    sort(v+1,v+n+1,greater <int>());
    mx=(c+b)/2;
    for(int i=1;i<=n;i++){
        if(v[i]>mx) {
                cnt++;
            continue;
        }
        if(!a.empty()&&a.back().ocp)
            if(a.back().ant-v[i]<=b) a.back().ocp=false;
            else{
                t.ant=v[i];
                t.ocp=true;
                a.push_back(t);
                cnt++;
            }
        else{
            t.ant=v[i];
            t.ocp=true;
            a.push_back(t);
            cnt++;
        }
    }
    fout<<cnt<<'\n';
    fout.close();
    fin.close();
    return 0;
}
