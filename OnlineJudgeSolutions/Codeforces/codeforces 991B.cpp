#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101],sum=0;
    double avg;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    avg=(double)sum/n;
    sort(a,a+n);
    int c=0;
    if(round(avg)==5)
    {
        cout<<c<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        sum+=(5-a[i]);
        c++;
        avg=(double)sum/n;
        if(round(avg)==5)
        {
            cout<<c<<endl;
            break;
        }
    }
    return 0;
}
