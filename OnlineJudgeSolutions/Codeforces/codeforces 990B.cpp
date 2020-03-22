#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a;
    vector<long long int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    int c=0;
    for(int i=0,j=i+1;i<n-1&&j<n;)
    {
        if(i==j)
            j++;
         if((v[i]>v[j]&&v[i]<=v[j]+k))
            {
                c++;
                j++;
            }
        else
            i++;
    }
    cout<<n-c<<endl;
    return 0;
}
