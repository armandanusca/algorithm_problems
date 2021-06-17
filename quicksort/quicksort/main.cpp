//
//  main.cpp
//  quicksort
//
//  Created by Anusca Armand on 30/05/2018.
//  Copyright © 2018 Anusca Armand. All rights reserved.
//

#include <iostream>
#define NMAX 100000
using namespace std;

void QuickSort(int a[],int left,int right);

int main(int argc, const char * argv[]) {
    freopen("quicksort.in", "r", stdin);
    int n,v[NMAX];
    cin>>n;
    for(int i=0;i<n;i++) cin>>v[i];
    QuickSort(v,0,n-1);
    for(int i = 0; i < n ; i++)
        cout<<v[i]<<' ';
    cout<<'\n';
    return 0;
}

void QuickSort(int a[],int left,int right){
    
    int i=left,j=right,p;
    p=(i+j)/2;
    
    while(i <= j){
        while (a[i] < a[p])
            i++;
        while (a[j] > a[p])
            j--;
        if(i <= j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    
    if(j > left) QuickSort(a,left,j);
    if(i < right) QuickSort(a,i,right);
    
}
