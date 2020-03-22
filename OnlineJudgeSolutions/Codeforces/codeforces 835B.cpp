#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k,l,sum=0,x;
    string s;
    cin>>k>>s;
    l=s.size();
    for(int i=0;i<l;i++){
        sum+=s[i]-'0';
    }
    sort(s.begin(),s.end());
        int cnt=0;
        for(int i=0;i<l;i++){
            if(sum<k){
                cnt++;
                sum+=(9-(s[i]-'0'));
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    return 0;
}


