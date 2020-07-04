#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int*a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int weight=0;
        int actuallw=0;
        for(int i=0;i<n;i++){
            actuallw+=a[i];
            if(a[i]>k){
                a[i]=k;
            }
        }
        for(int i=0;i<n;i++){
            weight+=a[i];
        }
        cout<<(actuallw-weight)<<endl;
    }
    return 0;
}
