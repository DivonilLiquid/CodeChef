#include <iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<utility>
using namespace std;
bool compare(pair<int,string>a,pair<int,string>b){
    int x=a.first;
    int y=b.first;
    return x>y;
}
void create(char *s,char *s2,int i,int j,vector<string>&v){
    if(s[i]=='\0'){
        s2[j]='\0';
        string k(s2);
        v.push_back(k);
        return;

    }
       s2[j]=s[i];
       create(s,s2,i+1,j+1,v);
       create(s,s2,i+1,j,v);
}
int main()
{
    char in1[10000],in2[10000],op[10000];
    cin>>in1;
    cin>>in2;
    int n;
    cin>>n;
    vector<pair<int,string>>d;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int p;
        cin>>p;
        d.push_back(make_pair(p,s));
    }
    sort(d.begin(),d.end(),compare);
    strcat(in1,in2);
    vector<string>v;
    create(in1,op,0,0,v);
    int t=0;
    for(auto i:v){
        cout<<i<<endl;
        t++;
    }
    cout<<t<<"***";
    return 0;
}
