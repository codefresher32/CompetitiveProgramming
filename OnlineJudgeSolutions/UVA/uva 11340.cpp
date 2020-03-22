#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,v,x,l;
    cin>>n;
    while(n--)
    {
        string s;
        char c;
        int arr[500]={0};
        cin>>k;
        while(k--)
        {
            cin>>c>>v;
            arr[c+128]=v;
        }
        cin>>m;
        double ans=0;
        cin.ignore();
        for(int i=0;i<m;i++)
        {
            getline(cin,s);
            l=s.size();
            for(int j=0;j<l;j++)
            {
                ans+=arr[s[j]+128];
            }
        }
        ans/=100;
        printf("%0.2f$\n",ans);
    }
    return 0;
}
