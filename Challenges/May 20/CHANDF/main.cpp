#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
using namespace std;
ll getbit(ll n,ll i){
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
    ll t;
    cin>>t;
    while(t--){
        ll x,y,l,r;
        cin>>x>>y>>l>>r;
        ll ans=0;
        ans=x|y;//ideal solution within range
        if(ans<=r){
            cout<<ans<<endl;
        }
        else{
            //try to make same value as that of answer within range
            int c=ans;
            int a[100];
            int k=0;
            while(c){
                int t=getbit(c,0);
                a[k]=t;
                k++;
                c=c>>1;
            }
            int t=0;
            int i=0;
            while(t<r){
                t=t+a[i]*pow(2,i);
            }
            cout<<t<<endl;
        }
    }
    return 0;
}
