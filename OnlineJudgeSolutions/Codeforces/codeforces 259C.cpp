#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int l;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++){
        if(s[i]=='0'){
            s.erase(s.begin()+i);
            cout<<s<<endl;
            return 0;
        }
    }
    s.erase(s.begin()+1);
    cout<<s<<endl;
    return 0;
}
