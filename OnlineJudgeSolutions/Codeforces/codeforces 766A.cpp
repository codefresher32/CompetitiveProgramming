#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int l1,l2;
    cin>>s1>>s2;
    l1=s1.size();
    l2=s2.size();
    if(l1<l2)
        swap(l1,l2);
    if(l1==l2&&s1==s2)
        cout<<"-1\n";
    else
        cout<<l1<<endl;
    return 0;
}
