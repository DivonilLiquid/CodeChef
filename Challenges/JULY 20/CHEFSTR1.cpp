#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    
	    ll *a=new ll[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    ll res=0;
	    for(ll i=0;i<n-1;i++){
	        ll diff=abs(a[i+1]-a[i]);
	        diff-=1;
	        res+=diff;
	    }
	    
	    cout<<res<<endl;
	}
	
	
	return 0;
}
