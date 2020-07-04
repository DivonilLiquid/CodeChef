#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll ts,js,m;
        cin>>ts;
        ll k=0;
        if(ts%2!=0){
            m=ts;
            // find multiples of 2 from 1 to m
            k=m/2;
        }
        else{
            while(ts%2==0){
                ts=ts>>1;
            }
            m=ts;
            // find multiples of 2 from 1 to m
            k=m/2;
        }
        cout<<k<<endl;
    }
    return 0;
}
