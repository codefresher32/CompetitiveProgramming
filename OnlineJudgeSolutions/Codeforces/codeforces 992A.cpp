#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,a;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a!=0){
        v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()<<endl;
    return 0;
}
