#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    for(int i=0;i<n;i++){
            cin>>a[i];
	    }
	    int five_c=0;
	    int ten_c=0;
	    int fifteen_c=0;
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(a[i]==10){
	            if(five_c>0){
	                five_c--;
	                ten_c++;
	            }
	            else{
	                flag=-1;
	                break;
	            }
	        }
	        else if(a[i]==15){
	            if(ten_c>0){
	                ten_c--;
	                fifteen_c++;
	            }
	            else if(five_c>=2){
                    five_c--;
                    five_c--;
                    fifteen_c++;
	            }
	            else{
	                flag=-1;
	                break;
	            }
	        }
	        else{
	            five_c++;
	        }
	    }
	    if(flag==-1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}