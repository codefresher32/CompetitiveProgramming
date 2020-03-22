#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2,cnt=0;
    bool f;
    l1=s1.size();
    l2=s2.size();
    for(int i=1;i<=min(l1,l2);i++){
        if(s1[i-1]==s2[i-1]){
            if(l1%i||l2%i){
            continue;
        }
        f=1;
        for(int j=i;j<l1;j++){
            if(s1[j]!=s1[j-i]){
                f=0;
                break;
            }
        }
        for(int j=i;j<l2;j++){
            if(s2[j]!=s2[j-i]){
                f=0;
                break;
            }
        }
        if(f){
            cnt++;
        }
        }
        else{
            break;
        }

    }

    cout<<cnt<<endl;
    return 0;
}
