#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int m=0;
void fun(int *a,int n,int k){

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int *a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        fun(a,n,k);
        cout<<endl;
    }
    return 0;
}
