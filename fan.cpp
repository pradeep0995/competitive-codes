#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,v1,v2;
    cin>>t;
    while(t--)
    {
        cin>>v1>>v2;
        int k=fabs(v1-v2);
        int cot=0,i=1;
        while((v1*i)%k!=v1){cot++;i++;}
        cout<<cot<<"\n";
    }
    return 0;
}
