#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cin>>s;
        int tr=0,k,x=1,mn=INT_MAX;
        char c;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Z')
            {
                x=0;
                cout<<0<<endl;
                break;
            }
            if(tr==0&&s[i]!='.')
            {
                tr=1;
                c=s[i];
                k=i;
            }
            else if(tr==1&&s[i]!='.')
            {
                if(c==s[i])
                    {
                        k=i;
                    }
                else if(c!=s[i])
                {
                    mn=min(mn,i-k);
                    c=s[i];
                    k=i;
                }
            }
        }
        if(x)
            cout<<mn<<endl;
    }
}
