#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n,a,cnt[100005]={0},l;
    cin>>s;
    cin>>n;
    l=s.size();
    while(n--){
        cin>>a;
        cnt[a-1]++;
    }
    for(int i=1;i<l/2;i++){
        cnt[i]+=cnt[i-1];
    }
    for(int i=0;i<l/2;i++){
        if(cnt[i]&1){
            swap(s[i],s[l-i-1]);
        }
    }
    cout<<s<<endl;
    return 0;
}




