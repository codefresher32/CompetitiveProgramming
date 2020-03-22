#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t,l,r;
    cin>>t;
    while(t--){
        s="";
        cin>>s;
        l=s.size();
        bool f1,f2,f3;
        f1=f2=f3=0;
        for(int i=0;i<l;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                f1=1;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                f2=1;
            }
            else{
                f3=1;
            }
        }
        if(f1&&f2&&f3){
            cout<<s<<endl;
        }
        else{
            if(f1==0&&f2==0){
                s[0]='A';
                s[1]='a';
            }
            else if(f3==0&&f2==0){
                s[0]='1';
                s[1]='a';
            }
            else if(f1==0&&f3==0){
                s[0]='A';
                s[1]='1';
            }
            else if(f1==0){
                for(int i=0;i<l-1;i++){
                    if(s[i]>='a'&&s[i]<='z'&&s[i+1]>='0'&&s[i+1]<='9'){
                        if(i+1==l-1){
                            s[i-1]='A';
                        }
                        else{
                            s[i+2]='A';
                        }
                        break;
                    }
                    if(s[i]>='0'&&s[i]<='9'&&s[i+1]>='a'&&s[i+1]<='z'){
                        if(i+1==l-1){
                            s[i-1]='A';
                        }
                        else{
                            s[i+2]='A';
                        }
                        break;
                    }
                }
            }
            else if(f2==0){
                for(int i=0;i<l-1;i++){
                    if(s[i]>='A'&&s[i]<='Z'&&s[i+1]>='0'&&s[i+1]<='9'){
                        if(i+1==l-1){
                            s[i-1]='a';
                        }
                        else{
                            s[i+2]='a';
                        }
                        break;
                    }
                    if(s[i]>='0'&&s[i]<='9'&&s[i+1]>='A'&&s[i+1]<='Z'){
                        if(i+1==l-1){
                            s[i-1]='a';
                        }
                        else{
                            s[i+2]='a';
                        }
                        break;
                    }
                }
            }
            else if(f3==0){
                for(int i=0;i<l-1;i++){
                    if(s[i]>='A'&&s[i]<='Z'&&s[i+1]>='a'&&s[i+1]<='z'){
                        if(i+1==l-1){
                            s[i-1]='1';
                        }
                        else{
                            s[i+2]='1';
                        }
                        break;
                    }
                    if(s[i]>='a'&&s[i]<='z'&&s[i+1]>='A'&&s[i+1]<='Z'){
                        if(i+1==l-1){
                            s[i-1]='1';
                        }
                        else{
                            s[i+2]='1';
                        }
                        break;
                    }
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
