#include<bits/stdc++.h>
using namespace std;

void sbinary(string s)
{
    long int sum=0,n,k;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        n=s[i]-'0';
        k=1;
        for(int j=1;j<=i+1;j++)
        {
            k*=2;
        }
        k--;
        sum+=n*k;
    }
    cout<<sum<<endl;
    return ;
}

int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='0')
        {
            return 0;
        }
        sbinary(s);
    }
}
