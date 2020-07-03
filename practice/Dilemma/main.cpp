#include <iostream>
#include<cstring>
using namespace std;
findzero(char *array,int n){
    for(int i=0;i<n;i++){
        if(array[i]==0){
            return false;
        }
    }
    return true;
}
bool findwinorloss(char *a,int c,int size){
    ///base case
    if(a[c]=='\0'){
        ///check if there is any 0 left or not in the array or not
        ///if found then return false
        if(findzero(a,c)==false){
            return false;
        }
        ///else return true
        else
            return true;
    }
    ///recursive case
    if(a[c]==1)
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        char a[100];
        cin>>a;
        int n=sizeof(a)/sizeof(string);
        if(findwinorloss(a,0,n))
            cout<<"WIN"<<endl;
        else
            cout<<"LOSE"<<endl;
    }
    return 0;
}
