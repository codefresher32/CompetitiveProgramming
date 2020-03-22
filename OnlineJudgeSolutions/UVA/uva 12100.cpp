#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,pos,cnt,i;
    cin>>t;
    while(t--)
    {
        int arr[105]={0};
        cin>>n>>pos;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int cnt=0;
        int tr =0;
        for(i=0;i<n;i++)
        {
            if(i==pos)
                cnt++;
            else if(i<pos&&arr[i]==arr[pos])
                cnt++;
            else if(i<pos&&arr[i]>arr[pos])
                cnt++,tr=1;
            else if(i>pos&&arr[i]>arr[pos]&&tr==0)
                cnt++,tr=1;
            else if(i>pos&&arr[i]>=arr[pos]&&tr==1)
                cnt++;

        }
        cout<<cnt<<endl;
    }
    return 0;
}
