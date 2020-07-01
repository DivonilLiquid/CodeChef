#include<bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;
ll corus(int f,int mapping[]){
    ll ans=0;
            for(int i=0;i<26;i++){
                if(mapping[i])
                mapping[i]=mapping[i]-f;
            }
            for(int i=0;i<26;i++){
                if(mapping[i]>=1){
                    ans=ans+mapping[i];
                }
            }
        return ans;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll q;
        cin>>q;
        char *a=new char[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        int mapping[26]={0};
        for(ll i=0;i<n;i++){
            int t=a[i]-'0'-49;
            mapping[t]++;
        }
        while(q--){
            int f;
            cin>>f;
            int map[26];
            for(int i=0;i<26;i++){
                map[i]=mapping[i];
            }
            cout<<corus(f,map)<<endl;
        }
    }
    return 0;
}
