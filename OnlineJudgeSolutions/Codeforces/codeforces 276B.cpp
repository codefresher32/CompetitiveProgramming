#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l,cnt=0,od[27]={0};
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++){
         od[s[i]-'a']++;
    }
    for(int i=0;i<27;i++){
        if(od[i]&1){
            cnt++;
        }
    }
    if(cnt&1||!cnt){
        cout<<"First\n";
    }
    else{
        cout<<"Second\n";
    }
    return 0;
}
