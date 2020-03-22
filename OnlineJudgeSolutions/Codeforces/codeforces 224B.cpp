#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,l,r;
    cin>>n>>k;
    int a[100005]={0};
    int c[100005]={0};
    int cnt=0,mn=INT_MAX;
    for(i=1;i<=n;i++)
        cin>>a[i];

    deque<int>d;
    l=r=-1;
    for(int i=1;i<=n;i++)
    {
        d.push_front(i);
        c[a[i]]++;
        if(c[a[i]]==1)
            cnt++;
        while(cnt==k)
        {
            if(d.size()<mn)
            {
                mn=d.size();
                l=d.back();
                r=d.front();
            }
            c[a[d.back()]]--;
            if(c[a[d.back()]]==0)
                cnt--;
            d.pop_back();
        }
    }
    if(l==-1)
        cout<<-1<<" "<<-1<<endl;
    else
        cout<<l<<" "<<r<<endl;
    return 0;
}
