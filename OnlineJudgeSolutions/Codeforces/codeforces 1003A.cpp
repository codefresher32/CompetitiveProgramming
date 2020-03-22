#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int c=1,mx=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1]){
            c++;
        }
        else{
            mx=max(mx,c);
            c=1;
        }
    }
    cout<<c<<endl;
    return 0;
}
