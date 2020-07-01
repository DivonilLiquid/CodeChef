#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int checkbits(int test){
    int count=0;
    while(test){
        test=test&(test-1);
        count++;
    }
    return count;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll N,Q;
        cin>>N;
        ll *a= new ll[N+1];
        cin>>Q;
        ll *q= new ll [Q+1];
        for(ll i =0;i<N;i++){
            cin>>a[i];
        }
        for(ll i =0;i<Q;i++){
            cin>>q[i];
        }
        ///find number of odd and even 1-s in an array a
        /*
        ODD ^ EVEN = ODD
        ODD ^ ODD = EVEN
        EVEN ^ EVEN = EVEN
        EVEN ^ ODD = ODD
        */
        int odd_a=0,even_a=0;
        for(int i =0;i<N;i++){
            int test=checkbits(a[i]);
            if(test%2==0){
                even_a++;
            }
            else
                odd_a++;
        }
        for(int i=0;i<Q;i++){
            if(checkbits(q[i])%2==0){
                cout<<even_a<<" "<<odd_a<<endl;
            }
            else
                cout<<odd_a<<" "<<even_a<<endl;
        }
    }
    return 0;
}
