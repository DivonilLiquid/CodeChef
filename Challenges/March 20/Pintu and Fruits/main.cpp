#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ///enter test case input
    ll t=0;
    cin>>t;
    while(t--){
        ///enter value of n and m
        ll n,m;
        cin>>n>>m;
        ll *F=new ll[n];
        ll *P=new ll[n];
        bool *present = new bool [m+1];
        ll *temp=new ll[m+1];
        ///intake elements
        for(auto i=0;i<n;i++){
            cin>>F[i];
        }
        for(auto i=0;i<n;i++){
            cin>>P[i];
        }
        ///find sum of corresponding elements
        for(ll i=0;i<m;i++){
            temp[i]=0;
            present[i]=false;
        }
        for(ll k=0;k<n;k++){
            present[F[k]]=true;
            temp[F[k]]+=P[k];
        }
        ///temp array has the price of m elemets
        /// find smallest element in that
        ll first=LLONG_MAX;
        for(ll i=1;i<=m;i++){
            if(temp[i]<first && present[i]==true){
                first=temp[i];
            }
        }
        cout<<first<<endl;
    }
    return 0;
}
