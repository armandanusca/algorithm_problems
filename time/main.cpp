#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main()
{
    int cnt=0;
    clock_t begin = clock();
    for(int i=0;i<=5000;i++)
        for(int k=0;k<=5000;k++)
        for(int j=1;j<=5000;j*=2)
            cnt=(cnt+1)%21043;

    clock_t end = clock();
    cout<<double(end-begin)/double(CLOCKS_PER_SEC)<<'\n';
    return 0;
}
