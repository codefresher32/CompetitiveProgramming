#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x,y;
    vector<long long>a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<n-2;i++){
        cin>>x;
        c.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            x=a[i];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]!=c[i]){
           y=b[i];
           break;
        }
    }
    cout<<x<<endl<<y<<endl;
    return 0;
}
