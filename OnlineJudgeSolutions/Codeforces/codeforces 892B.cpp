#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,a;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i-v[i]&&j<i)
                c++ ;
        }
    }
    cout<<n<<endl;
    return 0;
}
