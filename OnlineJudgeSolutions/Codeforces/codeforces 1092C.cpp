#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() > second.size();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s,s1,s2;
    n=2*n-2;
    vector<string>v,a;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    a=v;
    compare c;
    sort(v.begin(),v.end(),c);
    s1=v[0];
    s2=v[1];
    if(s1.size()<s2.size()){
        swap(s1,s2);
    }
    s="";
    int r=0;
    for(int i=0,j=0;i<s1.size()&&j<s2.size();){
        if(s1[i]==s2[j]){
            r++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    for(int i=r;i<s2.size();i++){
       s1+=s2[i];
    }
    int l;
    cout<<s1<<" ";
    string s3,ls;
    map<string,int>mp;
    for(int i=0;i<a.size();i++){
        l=a[i].size();
        s=a[i];
        s3=s1.substr(s1.size()-l);
        if(s==s3&&ls==s){
            cout<<"P";
        }
        else if(s==s3){
            if(mp[s]==0){
                cout<<"S";
            }
            else{
                cout<<"P";
            }
            mp[s]++;
        }
        else{
            cout<<"P";
        }
    }
    return 0;
}

