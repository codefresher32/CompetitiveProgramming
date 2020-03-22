#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0,l;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c++;
        else if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
            c++;
    }
    cout<<c<<endl;
    return 0;
}
