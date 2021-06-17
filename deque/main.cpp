#include <bits/stdc++.h>

using namespace std;

deque < pair <long long,long long> > q;
long long n,k;

int main()
{
    long long x,sum=0;
    ifstream fin("deque.in");
    fin>>n>>k;
    for(int i=1;i<=n;i++){
        fin>>x;
        while(!q.empty()&&q.back().first>=x) q.pop_back();
        q.push_back(make_pair(x,i));
        if(i-k>=q.front().second) q.pop_front();
        if(i>=k) sum+=q.front().first;
    }
    fin.close();
    ofstream fout("deque.out");
    fout<<sum<<'\n';
    fout.close();
    return 0;
}
