#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,r;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        vector<int>v;
        v.clear();
        while(n!=0)
        {
            r=n%2;
            v.push_back(r);
            n/=2;
        }
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
                c++;
        }
        reverse(v.begin(),v.end());
        cout<<"The parity of ";
        for(int i=0;i<v.size();i++)
            cout<<v[i];
        cout<<" is "<<c<<" (mod 2).\n";
    }
}
