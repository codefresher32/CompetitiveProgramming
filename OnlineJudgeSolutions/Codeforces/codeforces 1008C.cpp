#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,a;
    vector<int>x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        x.push_back(a);
    }
    sort(x.begin(),x.end());
    int cnt=1,mx=-1;
    for(int i=0;i<n-1;i++){
        if(x[i]==x[i+1]){
            cnt++;
        }
        else{
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<n-mx<<endl;
    return 0;
}
