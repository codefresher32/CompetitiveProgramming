#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,so,ans;
    int k,l,cl;
    cin>>s>>k;
    l=s.size();
    int sp=-1;
    int can=0,sn=0;
    for(int i=0;i<l;i++){
        if(s[i]=='*'){
            sn++;
            sp=i;
            so=s[i-1];
        }
        else if(s[i]=='?'){
            can++;
        }
    }
    cl=l-(sn+can);
    if(k<cl){
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'||s[i]=='*'){
                s[i-1]='0';
                cl--;
            }
            if(k==cl){
                break;
            }
        }
    }
    else if(k>cl&&sp!=-1){
        while(k!=cl){
            s.insert(sp,so);
            cl++;
        }
    }
    for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                ans+=s[i];
            }
        }
    if(ans.size()==k){
        cout<<ans<<endl;
    }
    else{
        cout<<"Impossible\n";
    }
    return 0;
}

