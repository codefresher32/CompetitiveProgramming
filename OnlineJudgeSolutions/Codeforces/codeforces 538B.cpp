#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p,k;
    cin>>n;
    vector<int>v;
    while(n)
    {
        m=n,p=0,k=1;
        while(m)
        {
            if(m%10)
                p+=k;
            m/=10;
            k*=10;
        }
        v.push_back(p);
        n-=p;
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
