#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,x,c=1;
    string s;
    cin>>n>>k>>s;
    sort(s.begin(),s.end());
    sum=s[0]-96;
    x=sum;
    for(int i=1;i<n;i++)
    {
        if((s[i]-96)==x||x==s[i]-97)
            continue;
        else if(c<k)
            {
            sum+=s[i]-96;
            x=s[i]-96;
            c++;
        }
    }
    if(c<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<sum<<endl;
    return 0;
}

