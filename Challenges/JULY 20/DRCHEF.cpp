#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    
	    ll n,x;
	    cin>>n>>x;
	    
	    ll *a= new ll[n];
	    
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    ll count=1;
	    sort(a,a+n);
	    if(a[0]==a[n-1]){
	        while(x<a[0]){
	            x*=2;
	            count++;
	        }
	        
	        cout<<count+(n-1)<<endl;
	    }
	    
	    else{
	        ll i=0;
	        while(x<a[n-1]){
	            if(x>=a[i]){
	                //cure is greater then population :: 10>1
	                if(a[i]*2>=x){  //1*2>=10
	                    x=a[i]*2;   //10=1*2 
	                    a[i]=0;
	                    i++;
	                }
	                else{
	                    i++;
	                    continue;
	                }
	            }
	            else{
	                if(x>a[i]/2){// 10 cure :: 18 pop      :: 10>9
	                    x=a[i]; //10->18
	                }
	                else{//10 cur :: 25 pop
	                    ll check=a[i];
	                    check-=x;
	                    if(check<=0){
	                        a[i]=0;
	                    }
	                    else{
	                        a[i]=min(a[i],2*check);
	                    }
	                    x*=2;
	                }
	                
	            }
	            count++;
	            
	        }
	        for(ll i=0;i<n;i++){
	            if(a[i]!=0){
	                count++;
	            }
	        }
	        cout<<count-1<<endl;
	    }
	    
	}
	
	return 0;
}
