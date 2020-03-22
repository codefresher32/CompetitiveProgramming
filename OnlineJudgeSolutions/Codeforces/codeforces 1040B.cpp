#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,x,y;
    cin>>n>>k;
    vector<int>v;
    m=2*k+1;
    x=n/m;
    if(n%m!=0)
        x++;
    int c=0;
    for(int i=1;c<x&&i<=n;)
    {
        if(c==0&&(i-(k+1)<=0))
        {
           y=i+(x-1)*m+k;
           if(y<n)
           {
               i++;
               continue;
           }
        }
        v.push_back(i);
        c++;
        i+=m;
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i<v.size()-1)
            cout<<" ";
    }
    return 0;
}

