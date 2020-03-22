#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,y;
    cin>>n>>a>>b;
    for(int i=0;i<=1e8;i++)
    {
        y=n-i*a;
        if(y<0)
            break;
        if(y%b==0)
        {
            y/=b;
            cout<<"YES\n"<<i<<" "<<y<<endl;
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
