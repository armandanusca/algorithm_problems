#include <iostream>
#include <fstream>
#define MOD 100003
using namespace std;

int n,k;

ifstream fin("2sah.in");
ofstream fout("2sah.out");

int PwLogMod(int x,int k){
    int p=1;
    while(k)
    {
        if(k%2==1)
        {
            p=(1LL*p*x)%MOD;
            k--;
        }
        x=(1LL*x*x)%MOD;
        k/=2;
    }
    return p;
}

void Multiply(int** a,int** b,int** c,int lung){
    int s[3][3];
    for(int i=0;i<lung;i++)
        for(int j=0;j<lung;j++) {
            s[i][j]=0;
            for (int k = 0; k < lung; k++)
                s[i][j]=((s[i][j] + (1LL * a[i][k] * b[k][j]) % MOD) % MOD);
        }

    for(int i=0;i<lung;i++)
        for(int j=0;j<lung;j++)
            c[i][j]=s[i][j];
}

void PwLogMat(int** a,int k){
    int **p;
    p=new int*[3];
    p[0]=new int[3];
    p[1]=new int[3];
    p[2]=new int[3];
    p[0][0]=1;
    p[0][1]=0;
    p[0][2]=0;
    p[1][0]=0;
    p[1][1]=1;
    p[1][2]=0;
    p[2][0]=0;
    p[2][1]=0;
    p[2][2]=1;
    while(k)
    {
        if(k%2==1)
        {
            Multiply(p,a,p,3);
            k--;
        }
        Multiply(a,a,a,3);
        k/=2;
    }
}

void PwLogMT(int **a,int **b,int k){
    if(k==1) {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                b[i][j]=a[i][j];
        return;
    }
    if(k%2==1){
        PwLogMT(a,b,k-1);
        Multiply(a,b,b,3);
        return;
    }
    PwLogMT(a,b,k/2);
    Multiply(b,b,b,3);
}


void Solve1(){
    fout<<PwLogMod(3,k-1)<<'\n';
}

void Test(){
    int **sol;
    sol=new int*[3];
    sol[0]=new int[3];
    sol[1]=new int[3];
    sol[2]=new int[3];
    sol[0][0]=1;
    sol[0][1]=1;
    sol[0][2]=2;
    sol[1][0]=0;
    sol[1][1]=0;
    sol[1][2]=0;
    sol[2][0]=0;
    sol[2][1]=0;
    sol[2][2]=0;
    PwLogMat(sol,1);
}

void Solve2(){
    if(k>n+1){
        fout<<"0\n";
        return;
    }
    if(k==n+1){
        fout<<"1\n";
        return;
    }
    if(k==n){
        fout<<"1\n";
        return;
    }
    int **sol;
    sol=new int*[3];
    sol[0]=new int[3];
    sol[1]=new int[3];
    sol[2]=new int[3];
    sol[0][0]=1;
    sol[0][1]=2;
    sol[0][2]=4;
    sol[1][0]=0;
    sol[1][1]=0;
    sol[1][2]=0;
    sol[2][0]=0;
    sol[2][1]=0;
    sol[2][2]=0;
    int **p;
    p=new int*[3];
    p[0]=new int[3];
    p[1]=new int[3];
    p[2]=new int[3];
    p[0][0]=0;
    p[0][1]=0;
    p[0][2]=1;
    p[1][0]=1;
    p[1][1]=0;
    p[1][2]=1;
    p[2][0]=0;
    p[2][1]=1;
    p[2][2]=1;
    int **rs;
    rs=new int*[3];
    rs[0]=new int[3];
    rs[1]=new int[3];
    rs[2]=new int[3];
    PwLogMT(p,rs,(n-k));
    Multiply(sol,rs,sol,3);
    int rez=sol[0][0];
    fout<<rez<<'\n';

}

int main(int argc, const char * argv[]) {
    int opt;
    fin>>opt;
    fin>>n>>k;
    if(opt==1) Solve1();
    else Solve2();
    Test();
    return 0;
}
