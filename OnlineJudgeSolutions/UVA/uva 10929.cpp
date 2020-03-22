#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,l;
    while(cin>>s)
    {
       l=s.size();
        if(s[0]=='0'&&l==1)
            return 0;
       n=0;
       for(int i=0;i<l;i++)
       {
           if(i%2==0)
            n+=s[i]-'0';
           else
            n-=s[i]-'0';
       }
       n=n<0?-1*n:n;
       if(n%11==0)
        cout<<s<<" is a multiple of 11.\n";
       else
        cout<<s<<" is not a multiple of 11.\n";
    }
    return 0;
}
