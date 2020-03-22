#include<iostream>
using namespace std;

int main()
{
    int x,y,i,sum = 0;
    cin >> x >> y;

    if(x>y)
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    for(i = x;i <= y; i++)
    {
        if(i % 13 != 0)
        {
            sum += i;
        }
    }
    cout << sum << "\n";
    return 0;
}
