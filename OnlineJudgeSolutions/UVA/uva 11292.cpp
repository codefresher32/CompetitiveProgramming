#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[20005],b;
    while(cin>>n>>m)
    {
        multiset<int>ms;
        if(n==0&&m==0)
            return 0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++){
            cin>>b;
            ms.insert(b);
        }
        sort(a,a+n);
        if(n>m)
        {
            cout<<"Loowater is doomed!\n";
            continue;
        }
        int sum=0,tr=1;

        for(int i=0;i<n;i++)
        {
           multiset<int>::iterator it=ms.lower_bound(a[i]);
           if(it==ms.end())
           {
               cout<<"Loowater is doomed!\n";
               tr=0;
               break;
           }
           sum+=*it;
           ms.erase(it);
        }
        if(tr)
            cout<<sum<<endl;
    }
}
