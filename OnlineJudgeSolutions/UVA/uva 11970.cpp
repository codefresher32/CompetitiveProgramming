#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
        int n,l=sqrt(1000000000);
        vector<int>v;
        cin>>n;
        printf("Case %d: ",++p);
        for(int i=1;i<=l;i++)
        {
            int x=n-(i*i);
            if(x%i==0&&x>0)
                v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i<v.size()-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
