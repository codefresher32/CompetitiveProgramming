#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    int l;
    string s;
    cin>>n>>k;
    s=to_string(n);
    l=s.size();
    if(l<=k ){
        l--;
        cout<<l<<endl;
        return 0;
    }
    int o=0,c=0;
    for(int i=l-1;i>=0;i--){
        if(o==k){
            break;
        }
        if(s[i]=='0'){
            o++;
        }
        else{
            c++;
        }
    }
    if(o<k){
        o--;
        cout<<c+o<<endl;
    }
    else{
       cout<<c<<endl;
    }
    return 0;
}
