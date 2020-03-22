#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,y;
    cin>>p>>y;
    bool f;
    for(int i=y;i>p;i--)
    {
        f=true;
        for(int j=2;j<=p&&j*j<=i;j++)
        {
            if(i%j==0)
            {
                f=false;
                break;
            }
        }
        if(f)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
