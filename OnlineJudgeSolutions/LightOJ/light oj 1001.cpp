#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n/2;
        y=n-x;
        printf("%d %d\n",x,y);
    }
    return 0;
}
