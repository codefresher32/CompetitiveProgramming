#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=4,b=9,n;
    cin>>n;
    if(n&1)
        printf("%d %d",b,n-b);
    else
        printf("%d %d",a,n-a);
    return 0;
}
