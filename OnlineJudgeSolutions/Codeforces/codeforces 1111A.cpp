#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(char s1,char s2)
{
    string ch="aeiou";
    int l1=0,l2=0;
    for(int i=0;i<5;i++){
        if(s1==ch[i]){
            l1=1;
        }
        if(s2==ch[i]){
            l2=1;
        }
    }
    if(l1!=l2){
        return false;
    }
    else{
        return true;
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2;
    l1=s1.size();
    l2=s2.size();
    if(l1==l2){
        for(int i=0;i<l1;i++){
            if(!check(s1[i],s2[i])){
                cout<<"No\n";
                return 0;
            }
        }
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

    return 0;
}



