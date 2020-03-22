#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=1,sum=0,i=0;
    cin>>n>>k;
    sum+=k;
    for(i=0;i<n;i++)
    {
        sum+=i*5;
        if((sum+(i+1)*5)<=240)
            continue;
        break;
    }
    cout<<i<<endl;
    return 0;
}
