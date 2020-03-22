#include<bits/stdc++.h>
using namespace std;

vector<int>v;

void solve(long long int x)
{
    if(x>1000000000)
        return ;
    v.push_back(x);
    solve(x*10+4);
    solve(x*10+7);
}

int main()
{
    solve(0);
    int n;
    cin>>n;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==n)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
