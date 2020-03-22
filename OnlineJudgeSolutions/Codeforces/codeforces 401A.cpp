#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,sum=0,a,y;
    cin>>n>>x;
    while(n--)
    {
        cin>>y;
        sum+=y;
    }
    sum= sum<0?-1*sum:sum;
    a=sum;
    a/=x;
    if(sum%x!=0)
        a++;
    cout<<a<<endl;
}
