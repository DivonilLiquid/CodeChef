#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int S,n;
        cin>>n>>S;
        int *p=new int[n];
        int *a=new int[n];
        int min_defender=INT_MAX;
        int min_frontier=INT_MAX;
        for(int i =0;i<n;i++){
            cin>>p[i];
        }
        vector<int> defender;
        vector<int> frontier;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                defender.push_back(i);
            }
            if(a[i]==1){
                frontier.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            if (a[i]==0){
                // case of defender
                min_defender=min(p[i],min_defender);
            }
            if (a[i]==1){
                //case of frontier
                min_frontier=min(p[i],min_frontier);
            }
        }
        const int K=100;
        if(defender.size()==0 || frontier.size()==0){
            cout<<"no"<<endl;
        }
        else if(K>(min_defender+min_frontier+S)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
