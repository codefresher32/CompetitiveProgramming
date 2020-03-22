#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101][101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int c=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1||a[i][j]==3)
            {
                c++;
                break;
            }
        }
        if(c==0)
            v.push_back(i+1);
    }
    cout<<v.size()<<endl;
    if(v.size()!=0){
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
    return 0;
}
