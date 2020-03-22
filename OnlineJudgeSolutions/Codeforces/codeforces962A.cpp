#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,sum=0,c=0,k,v;
    vector<int>a;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        cin>>v;
        a.push_back(v);
        sum+=a[i];
    }
    for(int i=0;i<d;i++)
    {
        c+=a[i];
        if(c*2>=sum)
        {
            k=i;
            break;
        }
    }
    cout<<k+1<<endl;
    return 0;

}
