#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if((n-1)%(m-1)!=0)
            cout<<"cannot do this\n";
        else
            cout<<(n-1)/(m-1)<<endl;
    }
    return 0;
}
