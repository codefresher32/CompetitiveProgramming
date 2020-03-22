#include<bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
   int n;
   while(cin>>n)
   {
       if(n==0)
        return 0;
       if(isprime(n))
       {
            if(n == 2)
                cout << "Perfect: 6!" << endl;
        else if(n == 3)
            cout << "Perfect: 28!" << endl;
        else if(n == 5)
            cout << "Perfect: 496!" << endl;
        else if(n == 7)
            cout << "Perfect: 8128!" << endl;
        else if(n == 13)
            cout << "Perfect: 33550336!" << endl;
        else if(n == 17)
            cout << "Perfect: 8589869056!" << endl;
        else if(n == 19)
            cout << "Perfect: 137438691328!" << endl;
        else if(n == 31)
            cout << "Perfect: 2305843008139952128!" << endl;
        else
            cout << "Given number is prime. But, NO perfect number is available." << endl;
    }
    else
        cout << "Given number is NOT prime! NO perfect number is available." << endl;
    }
    return 0;
}
