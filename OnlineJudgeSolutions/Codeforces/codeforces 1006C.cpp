#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<long long>x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x.push_back(a);
    }
    y=x;
    reverse(y.begin(),y.end());
    for(int i=1;i<n;i++)
    {
        x[i]+=x[i-1];
        y[i]+=y[i-1];
    }
    reverse(y.begin(),y.end());


    int l=0,p=n-1;
    long long mx=0;
    while(l<p)
    {
        if(x[l]==y[p])
        {
            mx=max(mx,x[l]);
            l++;
            p--;
        }
        else if(x[l]<y[p])
        {
            l++;
        }
        else if(x[l]>y[p])
        {
            p--;
        }
    }

    cout<<mx<<endl;
    return 0;
}

