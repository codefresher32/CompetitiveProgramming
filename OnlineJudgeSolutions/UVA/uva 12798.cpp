#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    while(cin>>n>>m)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                cin>>a;
                if(a>0)
                    c++;
            }
            if(c==m)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
