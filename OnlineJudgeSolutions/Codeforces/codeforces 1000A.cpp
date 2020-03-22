#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,f=1,sum=0;
    cin>>n;
    string s[n],s2[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>s2[i];
    }

    for(int i=0;i<n;i++)
    {
        f=1;
        for(int j=0;j<n;j++)
        {
            if(s[i]==s2[j])
            {
                f=0;
                s2[j]='z';
                break;
            }
        }
        if(f==1)
           sum++;
    }
    cout<<sum<<endl;
    return 0;
}
