#include <iostream>
#include<stack>
using namespace std;
bool isValid(string expr){
     stack<char> s;
    char x;
    for (int i=0; i<expr.length(); i++)
    {
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            s.push(expr[i]);
            continue;
        }
        if (s.empty())
           return false;

        switch (expr[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;
        case '*':
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;
        case '}':
            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
                return false;
            break;

        case ']':
            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
                return false;
            break;
        }
    }
    return (s.empty());
}
int main()
{
    string s;
    getline(cin,s);
    if(isValid(s))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
//()
