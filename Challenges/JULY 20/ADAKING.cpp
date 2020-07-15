#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    char a[8][8];
	    
	    a[0][0]='O';
	    for(int i=0;i<8;i++){
	        for(int j=0;j<8;j++){
	            if(i==0 && j==0){
	                continue;
	            }
	            if(k>1){
	                a[i][j]='.';
	                k--;
	            }
	            else{
	                a[i][j]='X';
	            }
	        }
	    }
	    for(int i=0;i<8;i++){
	        for(int j=0;j<8;j++){
	            cout<<a[i][j];
	        }
	        cout<<endl;
	    }
	
	
	    
	}
	
	
	return 0;
}
