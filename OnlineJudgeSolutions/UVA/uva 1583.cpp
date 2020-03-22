#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=n-100;
        if(p<0)
            p=1;
        while(true)
        {
            i=p;
            x=p+i%10+(i/10)%10+(i/100)%10+(i/1000)%10+(i/10000)%10+(i/100000)%10;
            if(x==n)
            {
                cout<<i<<endl;
                break;
            }
            else if(i>n)
            {
                cout<<0<<endl;
                break;
            }
            p++;
        }
    }
    return 0;
}
