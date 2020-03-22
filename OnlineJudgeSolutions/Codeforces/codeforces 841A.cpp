#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=1;
    string s;
    cin>>n>>k;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1]){
            c++;
            if(c>k)
            {
                cout<<"NO\n";
                return 0;
            }
        }
        else
            c=1;
    }
    cout<<"YES\n";
    return 0;
}
