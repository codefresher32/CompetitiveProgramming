#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"NO\n"<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    b.erase(unique(b.begin(),b.end()),b.end());

    if(((a.size()==1&&a=="0")||(b.size()==1&&b=="0"))&&a!=b){
        cout<<"NO\n"<<endl;
    }
    else{
        cout<<"YES\n";
    }
    return 0;
}
