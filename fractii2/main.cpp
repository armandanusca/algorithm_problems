#include <iostream>
#include <fstream>
#define MOD 100003
#define nmax 2005

int dp[nmax][nmax];

using namespace std;
int n;

void Solve1(){
    ofstream fout("fractii2.out");
    for(int i=1;i<=n-1;i++)
        fout<<i<<' ';
    fout<<n-1<<'\n';
    fout.close();
}

void Solve2(){
    ofstream fout("fractii2.out");
    int sol=0,left,right,m;
    dp[2][1]=1;
    for(int i=3;i<=n;i++){
        m=i/2;
        for(int j=1;j<=m;j++){
            left=(j+1)/2-1;
            right=(i-j)/2;
            dp[i][j]=dp[i][j-1]+dp[i-j][right]-dp[i-j][left];
            if(dp[i][j]<0) dp[i][j]+=MOD;
            if(dp[i][j]>=MOD) dp[i][j]-=MOD;
        }
    }
    m=n/2;
    /*for(int i=1;i<=m;i++)
        sol+=dp[n][i];*/
    fout<<dp[n][m]<<'\n';
    fout.close();
}


void Input(){
    int opt;
    ifstream fin("fractii2.in");
    fin>>opt;
    fin>>n;
    if(opt==1) Solve1();
    else Solve2();
    fin.close();
}

int main() {
    Input();
    return 0;
}

