#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int len,l,r;
    cin>>s;
    len=s.size();
    l=0;
    r=len-1;
    while(s[l]!='['&&l<len){
        l++;
    }
    while(s[r]!=']'&&r>=0){
        r--;
    }
    if(l<r){
        while(s[l]!=':'&&l<len){
            l++;
        }
        while(s[r]!=':'&&r>=0){
            r--;
        }
        if(l<r){
            int cnt=4;
            for(int i=l;i<=r;i++){
                if(s[i]=='|'){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
