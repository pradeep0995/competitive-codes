#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    char c[21];
    cin>>c;
    for(int i=0; i<strlen(c); i++)
    {
        s.push(c[i]);
    }
    while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
    return 0;
}
