#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    string t1,t2;
    for(int i = 0; i < l-1; i++)
    {
        if((s[i]-'0')%2 == 0 && (s[i]-'0' < (s[l-1]-'0')))
       {
            t1 = s;
            swap(t1[i],t1[l-1]);
            cout << t1 << endl;
            return 0;
        }
    }
    for(int i = l-1; i >= 0; i--)
    {
        if((s[i]-'0')%2 == 0 && (s[i]-'0' > (s[l-1]-'0')))
       {
            t2 = s;
            swap(t2[i],t2[l-1]);
            cout << t2 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
