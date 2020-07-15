#include <iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    
	    ll n;
	    cin>>n;
	    ll *x=new ll[4*n];
	    ll *y=new ll[4*n];
	    for(ll i =0;i<(4*n-1);i++){
	        cin>>x[i]>>y[i];
	    }
	    set<ll>m;
	    set<ll>o;
	    
	    for(ll i =0;i<(4*n-1);i++){
	        auto it1=m.find(x[i]);
	        auto it2=o.find(y[i]);
	        if(it1!=m.end()){
	            m.erase(x[i]);
	        }
	        else{
	            m.insert(x[i]);
	        }
	        if(it2!=o.end()){
	            o.erase(y[i]);
	        }
	        else{
	            o.insert(y[i]);
	        }
	        
	    }
	    for(auto i: m){
	        cout<<i<<" ";
	    }
	    for(auto i: o){
	        cout<<i<<endl;
	    }
	}
	return 0;
}
