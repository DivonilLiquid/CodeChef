#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
   {

   int n;
   cin>>n;
   int*a=new int [n];

   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int flag=0;
   int l=0;
   int d=0;
   while(l<n){
       if(a[l]==1){
            int k=l+1;
            int c=1;
            while(a[k]!=1 && k<n){
                c++;
                k++;
            }
            if(a[k]==1){
                d=c;
            }
       l=(k);
            if(d<6){
               flag=0;
               break;
            }
            else{
              flag=1;
            }
       }
       else{
        l++;
       }
   }
   if(flag!=0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

   }
   return 0;
}
