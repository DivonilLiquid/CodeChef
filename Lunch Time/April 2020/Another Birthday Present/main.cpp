#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int adjust(int k,int s){
    if(k<=s){
        return k;
    }
    else{
        return adjust(k-s,s);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll *a=new ll[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        k=adjust(k,n);
        for(int i=1;i<n-1;i++){

           swap(a[i],a[i+k]);
           for(int j=0;j<n;j++){
            cout<<a[j]<<", ";
           }
           cout<<endl;
        }

    }
    return 0;
}
