#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s="qwertyuiopasdfghjkl;zxcvbnm,./",o;
    char c;
    cin>>c>>o;
    int l,t,x;
    l=o.size();
    if(c=='R'){
        t=-1;
    }
    else{
        t=1;
    }
    for(int i=0;i<l;i++){
        if((o[i]=='q'||o[i]=='a'||o[i]=='z')&&c=='R'){
            o[i]=o[i];
        }
        else if((o[i]=='p'||o[i]==';'||o[i]=='/')&&c=='L'){
            o[i]=o[i];
        }
        else{
            x=s.find(o[i]);
            o[i]=s[x+t];
        }
    }

    cout<<o<<endl;
    return 0;
}
