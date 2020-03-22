#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int l1,l2;
    cin>>s>>t;
    l1=s.size();
    l2=t.size();
    if(l1<l2)
    {
        swap(s,t);
        swap(l1,l2);
    }
    int c=0;
    for(int i=l2-1,j=l1-1;i>=0;i--,j--)
    {
        if(t[i]==s[j])
            c++;
        else
            break;
    }
    cout<<l1+l2-2*c<<endl;
    return 0;
}

