#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    int t,i,j,flag;
    char a[10001],b[10001];
    cin>>t;
    while(t--)
    {   flag=0;
        cin>>a;
        cin>>b;
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    flag=1;
                    break;
                }
                if(flag==1)
                    break;
            }
        }
        flag==1?cout<<"YES"<<"\n":cout<<"NO";
    }
    return 0;
}
