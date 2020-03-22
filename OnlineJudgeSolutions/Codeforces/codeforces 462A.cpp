#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    char s[101][101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c=0;
            if(s[i][j+1]=='o'&&j+1<n)
                c++;
            if(s[i][j-1]=='o'&&j-1>=0)
                c++;
            if(s[i+1][j]=='o'&&i+1<n)
                c++;
            if(s[i-1][j]=='o'&&i-1>=0)
                c++;
            if(c&1)
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    return 0;
}
