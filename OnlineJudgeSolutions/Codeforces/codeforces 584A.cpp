#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
        if(n==1&&t==10)
        {
            cout<<"-1\n";
            return 0;
        }
        if(t<10)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<t;
            }
        }
        else
        {
            cout<<t;
            for(int i=1;i<=n-2;i++)
            {
                cout<<"0";
            }
        }
        cout<<endl;
        return 0;
}
