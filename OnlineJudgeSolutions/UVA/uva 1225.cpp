#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        string str;
        int v[10]={0};
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            x=i;
            a:if(x>9)
                {
                    int r;
                    r=x%10;
                    str.push_back(r+'0');
                    x/=10;
                    goto a;
                }
         str.push_back(x+'0');
        }
       for(int i=0;i<str.length();i++)
       {
           v[str[i]-'0']++;
       }
       for(int i=0;i<9;i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<v[9]<<endl;
    }
    return 0;
}
