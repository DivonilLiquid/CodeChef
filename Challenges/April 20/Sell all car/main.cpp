#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
	    cin>>n;
	    int *a=new int [n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int p=0,year=0,mod=1000000007;
	    for(int i=n-1;i>=0;i--){
	        if((a[i]-year)>=0){
                p=(p+a[i]-year)%mod;
                year++;
	        }
	    }
	    cout<<p<<endl;
	}
	return 0;
}
