#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t,s1;
    cin>>s>>t;
    s1=s;
    int l1,l2,c=0;
    l1=s.size();
    l2=t.size();

   for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
            {
                if(s1[j]==t[i])
                {
                    c++;
                    s1[j]='4';
                    break;
                }
            }
    }
    if(c!=l2)
    {
        cout<<"need tree\n";
        return 0;
    }
    int k=0;
    c=0;
    for(int i=0;i<l2;i++)
    {
       for(int j=k;j<l1;j++)
       {
           if(s[j]==t[i])
           {
               k=j+1;
               c++;
               break;
           }
       }
    }
    if(c==l2)
    {
        cout<<"automaton\n";
    }
    else if(c!=l2&&l1==l2)
    {
        cout<<"array\n";
    }
    else
    {
        cout<<"both\n";
    }
    return 0;
}
