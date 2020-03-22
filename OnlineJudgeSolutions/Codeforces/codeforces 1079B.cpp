#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int l,r,c,st;
    cin>>s;
    l=s.size();
    for(int i=1;i<=5;i++){
       r=i;
       c=(l-1)/i+1;
       if(c>20){
            continue;
       }
       else{
            break;
       }
    }
    st=r*c-l;
    int j=0,cnt=0;
    cout<<r<<" "<<c<<endl;
    for(int i=0;i<r;i++){
        int t=1,cnt=0;
        for( ;cnt<c;j++){
            if(t&&st){
                cout<<'*';
                t=0;
                st--;
                j--;
            }
            else{
               cout<<s[j];
            }
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}


