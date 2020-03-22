#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int cnt1=0,cnt0=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            if(cnt0==0){
                cout<<"1 1\n";
            }
            else if(cnt0==1){
                cout<<"1 2\n";
            }
            else if(cnt0==2){
                cout<<"1 3\n";
            }
            else{
                cout<<"1 4\n";
            }
            cnt0++;
            cnt0=(cnt0==4)?0:cnt0;
        }
        else{
            if(cnt1==0){
                cout<<"4 1\n";
            }
            else{
                cout<<"4 3\n";
            }
            cnt1++;
            cnt1=(cnt1==2)?0:cnt1;
        }
    }
    return 0;
}


