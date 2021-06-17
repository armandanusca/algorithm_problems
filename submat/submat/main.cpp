#include <iostream>

using namespace std;

int n;
int a[1002][1002],dp[1002][1002];

inline void DP();
inline bool Check(int x,int y);

int main(int argc, const char * argv[]) {
    freopen("submat.in", "r", stdin);
    freopen("submat.out", "w", stdout);
    cin>>n;
    for (int i=0;i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    DP();
    int mx=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            mx=max(mx,dp[i][j]);
    cout<<mx<<'\n';
    return 0;
}

inline void DP(){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(Check(i,j))
            {
                if( (a[i][j]==a[i-1][j-1]) && (a[i][j]==a[i-1][j]) && (a[i][j]==a[i][j-1]) ) dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                    else dp[i][j]=1;
            }
            else dp[i][j]=1;
}

inline bool Check(int x,int y){
    if(x==0) return false;
    if(y==0) return false;
    return true;
}
