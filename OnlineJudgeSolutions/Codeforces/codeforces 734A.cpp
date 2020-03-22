#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100005];
    int n,i,c=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            c++;
        }
    }
    if(c==(n-c))
    {
        cout<<"Friendship\n";
    }
    else if(c>(n-c))
    {
        cout<<"Anton\n";
    }
    else
    {
        cout<<"Danik\n";
    }
    return 0;
}
