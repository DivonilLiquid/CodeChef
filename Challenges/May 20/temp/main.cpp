#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//it returns bit at 0th position
int getbit(int n,int i){
    if(i<0){
        return n;
    }
    else{
        int p=1<<i;
        n=n&p;
        return n;
    }
}
int main() {
    int n;
    cin>>n;
    int p=n;
    int a[100];
    int k=0;
    while(p){
       int t=getbit(p,0);
       a[k]=t;
       cout<<k<<"->"<<a[k];
       k++;
       p=p>>1;
    }
    for(int i=0;i<k;i++){
        cout<<a[i]<<" ";
    }
    int t=0;
    for(int i=0;i<k;i++){
        t=t+a[i]*pow(2,i);
    }
    cout<<t;
    return 0;
}
