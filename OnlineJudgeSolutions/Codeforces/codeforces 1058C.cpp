#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d,m,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        sum+=s[i]-'0';
    }
    int s1=0,cnt,x;
    for(int i=n;i>=2;i--){
        cnt=0;
        if(sum%i==0){
           s1=sum/i;
           x=0;
           for(int j=0;j<n;j++){
            if(x==s1){
                x=0;
                cnt++;
            }
            if(x<s1){
                x+=s[j]-'0';
            }
            else{
                x=0;
                break;
            }
           }
           if(x==s1){
            cnt++;
        }
        if(cnt==i&&cnt>=2){
            cout<<"YES\n";
            return 0;
        }
        }
    }
    cout<<"NO\n";
    return 0;
}
