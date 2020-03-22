#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,sum=0;
    cin>>a>>b>>c>>n;
    a-=c,b-=c,sum=a+b+c;
    if(sum>=n||a<0||b<0)
    {
        cout<<-1<<endl;
        return 0;
    }
    sum=n-sum;
    cout<<sum<<endl;
    return 0;
}
