#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int l;
    while(cin>>s)
    {
        vector<string>v;
        l=s.size();
        string o,p;
        for(int i=l;i>0;i--)
        {
            for(int j=0;(i+j)<=l;j++)
            {
                o=s.substr(j,i);
                p=o;
                reverse(p.begin(),p.end());
                if(p==o)
                    v.push_back(p);
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        cout<<"The string '"<<s<<"' contains "<<v.size()<<" palindromes.\n";
    }
    return 0;
}
