#include <iostream>
using namespace std;
typedef long long int ll;
ll function(ll a){
    ll sum=0;
    while(a){
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        ll *a=new ll[n];
        ll *b=new ll[n];
        
        for(ll i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        
        ll a_score=0,b_score=0;
        
        for(ll i=0;i<n;i++){
            ll x=function(a[i]);
            ll y=function(b[i]);
            if(x>y){
                a_score++;
            }
            else if(y>x){
                b_score++;
            }
            else{
                a_score++;b_score++;
            }
        }
        
        if(a_score>b_score){
            cout<<"0"<<" "<<a_score<<endl;
        }
        else if(b_score>a_score){
            cout<<"1"<<" "<<b_score<<endl;
        }
        else{
            cout<<"2"<<" "<<a_score<<endl;
        }
    }
    
	return 0;
}
