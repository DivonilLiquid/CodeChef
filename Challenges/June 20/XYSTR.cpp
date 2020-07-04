#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        /*
              p  i  n
        x  y  x  x  y
        0  1  0  0  0
        pair=2;
        */
        int pair=0;
        int n=s.length();
        int map[n]={0};
        for(int i=0;i<n-1;i++){
            if(map[i]==0){
                int next=i+1,prev=i-1;
                if(s[i]=='x'){
                    if(s[next]=='y' && map[next]==0){
                        map[next]=1;
                        pair++;
                    }
                }
                else{
                    if(s[next]=='x' && map[next]==0){
                        map[next]=1;
                        pair++;
                    }
                }
            }
        }
        cout<<pair<<endl;
    }
    return 0;
}