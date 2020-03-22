#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    int x[100005]={0},y[100005]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=max(x[i],y[i]);
    }
    cout<<sum+n<<endl;
    return 0;
}

