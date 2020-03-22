#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n<=100)
        return f(f(n+11));
    if(n>=101)
        return (n-10);
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        printf("f91(%d) = %d\n",n,f(n));
    }
}
