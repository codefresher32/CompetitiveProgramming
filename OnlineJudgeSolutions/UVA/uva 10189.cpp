#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,f=0;
    char s[101][101];
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            return 0;

        for(int i=0;i<n;i++)
            cin>>s[i];
        if(f)
            cout<<"\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='*')
                    continue;
                int t=0;
                if(s[i+1][j]=='*'&&i+1<n)
                    t++;
                if(s[i+1][j+1]=='*'&&i+1<n&&j+1<m)
                    t++;
                if(s[i+1][j-1]=='*'&&i+1<n&&j-1>=0)
                    t++;
                if(s[i][j+1]=='*'&&j+1<m)
                    t++;
                if(s[i][j-1]=='*'&&j-1>=0)
                    t++;
                if(s[i-1][j]=='*'&&i-1>=0)
                    t++;
                if(s[i-1][j-1]=='*'&&i-1>=0&&j-1>=0)
                    t++;
                if(s[i-1][j+1]=='*'&&i-1>=0&&j+1<m)
                    t++;
                s[i][j]=t+'0';
            }
        }
        printf("Field #%d:\n", ++f);
        for(int i=0;i<n;i++)
            {
                cout<<s[i]<<endl;
            }
    }
}
