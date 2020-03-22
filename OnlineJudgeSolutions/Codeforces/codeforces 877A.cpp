#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1=5,l2=4,l3=5,l4=3,l5=6,l;
    string s,s1,s2,s3,s4,s5;
    cin>>s;
    l=s.size();
    int c=0;
    for(int i=0;i<l-2;i++)
    {
       s1=s.substr(i,l1);
       s2=s.substr(i,l2);
       s3=s.substr(i,l3);
       s4=s.substr(i,l4);
       s5=s.substr(i,l5);
       if(s1=="Danil"||s2=="Olya"||s3=="Slava"||s4=="Ann"||s5=="Nikita")
            c++;
    }
    if(c==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
