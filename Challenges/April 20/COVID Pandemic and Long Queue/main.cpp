#include <iostream>
#include<queue>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e;
        int j=0;
        int *m=new int [n];
        for(int i=0;i<n;i++){
            cin>>e;
            if(e==1){
                m[j++]=i;
            }
        }
        bool flag=false;
        for(int i=j-1;i>=1;i--){
            if((m[i]-m[i-1])<6){
                flag==true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true){
        cout<<"YES"<<endl;
       }
       else{
            cout<<"NO"<<endl;
       }
    }
    return 0;
}
