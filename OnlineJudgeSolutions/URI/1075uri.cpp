#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    for(i = 1;i < 1000;  i++)
    {
        if(i % n == 2)
        {
            cout << i << '\n';
        }
    }
    return 0;
}
