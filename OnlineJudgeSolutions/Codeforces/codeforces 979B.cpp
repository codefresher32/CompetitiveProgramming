#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len,a[26]={0};
    string s;
    cin>>s;
    len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            a[s[i]-'a'+1]++;
        }
        else
        {
            a[s[i]-'A'+1]++;
        }
    }
    sort(a,a+27);
    cout<<a[26]<<endl;
    return 0;
}
