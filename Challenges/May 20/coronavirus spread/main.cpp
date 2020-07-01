#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
void covid19(int *arr , int n, vector <int> &v){
    if(n==0){
        cout<<0<<" "<<0<<endl;
        return;
    }
    if(n==1){
        cout<<1<<" "<<1<<endl;
        return;
    }
    else{
        int i=1;
    int p=1;
    while(i<n){
        int k=i;
        while(arr[k]-arr[k-1]<=2 && (k)<=n-1){
            p++;
            k++;
        }
        v.push_back(p);
        if(arr[k]-arr[k-1]>2){
            p=1;
        }
        i=k+1;
    }
    if((arr[n-1]-arr[n-2])>2){
        int a=1;
        v.push_back(a);
    }
    int minimum=v[0];
    int maximum=v[0];
    for(auto i=v.begin();i<v.end();i++){
        minimum=min(minimum,*i);
        maximum=max(maximum,*i);
    }
    cout<<minimum<<" "<<maximum<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int *arr=new int [n+1];
    int m=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>v;
    covid19(arr,n,v);
    }
    return 0;
}
