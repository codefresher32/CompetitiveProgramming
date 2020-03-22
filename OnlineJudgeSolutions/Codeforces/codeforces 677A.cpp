#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,w=0;
    vector<int>v;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>h)
        {
            w+=2;
        }
        else
        {
            w++;
        }
    }
    cout<<w<<endl;
    return 0;
}
