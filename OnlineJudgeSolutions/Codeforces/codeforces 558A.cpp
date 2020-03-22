#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,x,a,l1,l2;
    vector<pair<int,int>>p1,p2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>a;
        if(x>0)
            p1.push_back(make_pair(x,a));
        else
            p2.push_back(make_pair(x,a));
    }
    sort(p1.begin(),p1.end());
    sort(p2.rbegin(),p2.rend());
    l1=p1.size();
    l2=p2.size();

    int sum=0,u=1,v=1;
    if(l1>=l2)
    {
        for(int i=0;i<n;i++)
        {
            if(u==1&&l1!=0)
            {
                sum+=p1.front().second;
                p1.erase(p1.begin());
                u=0;
                v=1;
                l1--;
            }
            else if(v==1&&l2!=0)
            {
                sum+=p2.front().second;
                p2.erase(p2.begin());
                u=1;
                v=0;
                l2--;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(u==1&&l2!=0)
            {
                sum+=p2.front().second;
                p2.erase(p2.begin());
                u=0;
                v=1;
                l2--;
            }
            else if(v==1&&l1!=0)
            {
                sum+=p1.front().second;
                p1.erase(p1.begin());
                v=0;
                u=1;
                l1--;
            }
        }
    }

    cout<<sum<<endl;
    return 0;
}
