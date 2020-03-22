#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1,t,tr,c;
    cin>>n>>c;
    cin>>t;
    tr=t;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        if(abs(t-tr)<=c)
        {
            cnt++;
            tr=t;
        }
        else
        {
            tr=t;
            cnt=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
