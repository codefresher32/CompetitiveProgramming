#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        string s;
        cin>>s;
        l=s.size();
        n=l/n;
        for(int i=0;i<l;i+=n)
        {
            for(int j=i,k=j+n-1;k>j;j++,k--)
            {
                swap(s[j],s[k]);
            }
        }
        cout<<s<<endl;
    }
}
