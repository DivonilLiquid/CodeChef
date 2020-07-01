#include <iostream>

using namespace std;
void printpath(){
    cout<<"1 1"<<endl;
    cout<<"8 8"<<endl;
    cout<<"7 7"<<endl;
    cout<<"6 8"<<endl;
    cout<<"1 3"<<endl;
    cout<<"3 1"<<endl;
    cout<<"8 6"<<endl;
    cout<<"7 5"<<endl;
    cout<<"8 4"<<endl;
    cout<<"5 1"<<endl;
    cout<<"1 5"<<endl;
    cout<<"4 8"<<endl;
    cout<<"3 7"<<endl;
    cout<<"2 8"<<endl;
    cout<<"1 7"<<endl;
    cout<<"7 1"<<endl;
    cout<<"8 2"<<endl;
    return ;
}
int main()
{
   /* a bishop take 17 fix steps to move on every black box only if it is starting from 1,1 or 1,a
   wherever bishop is placed try to bring it at 1,1 or 1,a
   this can be done by keeping three cases in mind
   if r==c this means that bishop is on the biggest diagonal of chess board and we just have to bring it at 1,1 i.e., 1 move
   if r!=c this means that bishop is not on the biggest diagonal of chess board and we have to bring it at main diagonal then to 1,1;i.e.,2 move
   */
   int t;
   cin>>t;
   while(t--){
    int r,c;
    cin>>r>>c;
    if(r==1 && c==1){
        cout<<17<<endl;
        printpath();
    }
    else if(r==c){
        cout<<18<<endl;
        cout<<r<<" "<<c<<endl;
        printpath();
    }
    else{
        cout<<19<<endl;
        cout<<r<<" "<<c<<endl;
        int d=(r+c)/2;
        cout<<d<<" "<<d<<endl;
        printpath();
    }
   }
    return 0;
}
