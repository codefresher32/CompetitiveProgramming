#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a;
    vector <int> v;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            cout<<v[i];
            if(i<(n-1))
            {
                cout<<" ";
            }
        }
        cout<<endl;
          v.clear();
    }
}
