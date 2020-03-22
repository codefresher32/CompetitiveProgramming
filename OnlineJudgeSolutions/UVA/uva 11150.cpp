#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,sum=0;

    while(cin>>n)
    {
        sum=n;

        while(n>=3)
        {
            sum+=n/3;
            n=n/3+n%3;
        }
        if(n==2)
            {
                sum++;
            }
        cout<<sum<<endl;
    }
    return 0;
}
