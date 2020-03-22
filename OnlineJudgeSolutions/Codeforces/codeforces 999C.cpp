#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<char,int>&a,const pair<char,int>&b){
    return a.second<b.second;
}

int main()
{
    int n,k;
    string s;
    vector<pair<char,int>>v;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(s[i],i));
    }
    sort(v.begin(),v.end());
    sort(v.begin()+k,v.end(),comp);
    for(int i=k;i<n;i++){
        cout<<v[i].first;
    }
    return 0;
}
