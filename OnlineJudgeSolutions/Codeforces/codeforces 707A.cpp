#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    char s[105][105];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='C'||s[i][j]=='M'||s[i][j]=='Y')
            {
                cout<<"#Color\n";
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}
