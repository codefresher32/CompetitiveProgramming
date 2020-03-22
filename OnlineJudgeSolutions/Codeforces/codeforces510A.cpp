#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=1,r=1;
    char s[51];
    cin>>n>>m;
    while(r<=n)
    {
        if(r%2!=0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<"#";
            }
            cout<<"\n";
        }
        else if(c==1)
        {
            for(int i=0;i<m-1;i++)
            {
                cout<<".";
            }
            cout<<"#\n";
            c=0;
        }
        else
        {
            cout<<"#";
            for(int i=1;i<m;i++)
            {
                cout<<".";
            }
            cout<<"\n";
            c=1;
        }
        r++;
    }
    return 0;
}
