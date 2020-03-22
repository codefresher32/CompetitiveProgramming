#include<bits/stdc++.h>
using namespace std;

int i,j,k,l;
string s;

int isPalindrome()
{
    for(j=i,k=l-1;j<k;++j,--k)
    {
        if(s[j]!=s[k])
            return 0;
    }
    return 1;
}

int main()
{
    while(cin>>s)
    {
        l=s.size();
        for(i=0;i<l;i++)
        {
            if(isPalindrome())
            {
                for(j=i-1;j>=0;j--)
                    s+=s[j];
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
