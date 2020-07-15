#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll *a=new ll[n];
	    ll *b=new ll[n];
	    
	    ll minimum=INT_MAX;//it will contain the least elements from both the set 
	    
	    unordered_map<ll,ll>m,m1,m2;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        minimum=min(minimum,a[i]);
	        m[a[i]]++;
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        minimum=min(minimum,b[i]);
	        m[b[i]]++;
	    }
	    
	    // mapped a[] & b[] elements as per their count
	    int flag=0;
	    
	    for(auto i: m){
	        if(i.second%2==0){
	            m1[i.first]=i.second/2;// divides count of each element
	        }
	        else{
	            flag=-1;
	            break;
	        }
	    }
	    if(flag==-1){
	        cout<<"-1"<<endl;
	    }
	    else{
	       m2=m1;
	       //intialize two vector 
	       vector<ll> v,v1;
	       
	       for(ll i=0;i<n;i++){
	           if(m1[a[i]]){
	               m1[a[i]]--;
	           }
	           else{
	               v.push_back(a[i]);
	           }
	       }
	       for(ll i=0;i<n;i++){
	           if(m2[b[i]]){
	               m2[b[i]]--;
	           }
	           else{
	               v1.push_back(b[i]);
	           }
	       }
	       sort(v.begin(),v.end());
	       sort(v1.begin(),v1.end(),greater<ll>());//descending order
	       ll x=v.size();
	       
	       if(x==0){
	           cout<<"0"<<endl;
	       }
	       else{
	           ll ans=0;
	           for(ll i=0;i<x;i++){
	               ans+=min(2*minimum,min(v[i],v1[i]));
	           }
	           cout<<ans<<endl;
	       }
	    }
	    
	}
	
	return 0;
}
