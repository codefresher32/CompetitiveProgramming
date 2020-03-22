#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,c=0;
    cin>>a>>b;

        while(1)
        {
            a*=3;
            b*=2;
            c++;
            if(a>b)
            {
                cout<<c<<endl;
                return 0;
            }
        }
    return 0;
}
