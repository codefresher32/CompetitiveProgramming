#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        long long int k=0;
        string ans="";
        int c,d;
        if(a<b)
            swap(a,b);
        while(a!=0)
        {
            c=a%2;
            a/=2;
            d=b==0?0:d;
            if(b!=0)
            {
            d=b%2;
            b/=2;
            }
            if(c==d)
                ans.push_back(0+'0');
            else if(c==1||d==1)
                ans.push_back(1+'0');
        }
        for(int i=0;i<ans.size();i++)
        {
            k+=(ans[i]-'0')*pow(2,i);
        }
        cout<<k<<endl;

    }
    return 0;
}
