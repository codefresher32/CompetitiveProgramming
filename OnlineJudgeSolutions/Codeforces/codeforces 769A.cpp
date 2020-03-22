 #include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[6];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n/2]<<endl;
    return 0;
}

