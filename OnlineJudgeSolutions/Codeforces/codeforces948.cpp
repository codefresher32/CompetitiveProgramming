#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int r,c,i,j;
    cin>>r>>c;
    char s[501][501];

    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
            cin>>s[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             if(s[i][j]=='S'&&s[i][j-1]=='W'||s[i][j]=='S'&&s[i][j+1]=='W'||s[i][j]=='S'&&s[i][j-1]=='W'||s[i][j]=='S'&&s[i+1][j]=='W'||s[i][j]=='S'&&s[i-1][j]=='W')
            {
                cout<<"No"<<endl;
                return 0;
            }
            else if(s[i][j]=='.')
            {
                s[i][j]='D';
            }
        }
    }
    cout<<"Yes"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }
    return 0;

}
