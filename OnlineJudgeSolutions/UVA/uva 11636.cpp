#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=0;
    while(cin>>n)
    {
        if(n<0)
            return 0;
        int c=0,x;
        n--;
        while(n>0)
        {
            n/=2;
            c++;
        }
        printf("Case %d: %d\n",++p,c);
    }
}
