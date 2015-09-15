#include <cmath>
#include<stdio.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    bool search;
    int test,R,C,r,c;
    cin>>test;
    while(test--)
        {
        int flag;
        // input the first array
        cin>>R>>C;
        char a[R][C];
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
                cin>>a[i][j];
        // input the second array
        cin>>r>>c;
        char b[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>b[i][j];
        //checking whether array b is in a
        long coutn;
        for(int i=0;i<=R-r;i++)
        {
            for(int j=0;j<=C-c;j++)
            {
            coutn=0,search=true;
            //check
            if(a[i][j]==b[0][0])
               {
                flag=1;
                for(int k=0; k<r;++k)
                {
                    for(int l=0; l<c ;++l)
                    {
                    if(a[i+k][j+l]==b[k][l])
                        coutn++;
                    else {
                        flag=0;
                        break;
                    }
                }
                   if(flag==0)break;
                }
                if(coutn==r*c)
                    {
                    cout<<"YES\n";
                    search=false;
                }
            }
            if(search==false)break;
            else continue;
    }
            if(search==false)break;
        }
        if(search==true)cout<<"NO\n";
}
    return 0;
}
