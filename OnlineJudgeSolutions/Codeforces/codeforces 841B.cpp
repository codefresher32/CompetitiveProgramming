#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,odd=0,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]&1)
            odd++;
    }
   if(odd==0)
    cout<<"Second\n";
   else
    cout<<"First\n";
    return 0;
}
