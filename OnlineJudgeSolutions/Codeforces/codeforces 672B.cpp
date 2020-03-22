#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,c=0;
    cin>>n;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    if(s.length()>26)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<c<<endl;
    return 0;
}
