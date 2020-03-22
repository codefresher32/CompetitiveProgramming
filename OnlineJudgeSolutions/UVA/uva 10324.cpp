#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    char s[1000001];
    int t,n=1,i,j,c;
    bool valid;
    while(cin>>s)
    {
        if(strcmp(s,"n")==0)
        {
            return 0;
        }
        cin>>t;
        cout<<"Case "<<n<<":\n";
        while(t--)
        {
            cin>>i>>j;
            if(i>j)
            {
                swap(i,j);
            }
            valid=true;
            for(int k=i;k<j;k++)
            {
                if(s[k]!=s[k+1])
                {
                    valid=false;
                }
            }
            if(valid)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
        n++;
    }
    return 0;
}
