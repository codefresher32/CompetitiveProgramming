#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i*i;
        }
        cout<<sum<<endl;
    }
}
