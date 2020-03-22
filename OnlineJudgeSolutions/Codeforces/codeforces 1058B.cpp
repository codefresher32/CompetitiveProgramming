#include<bits/stdc++.h>

using namespace std;

float area(int x1, int y1, int x2, int y2,
                                    int x3, int y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) +
                x3 * (y1 - y2)) / 2.0);
}

bool check(int x1, int y1, int x2, int y2, int x3,
             int y3, int x4, int y4, int x, int y)
{
    float A = area(x1, y1, x2, y2, x3, y3) +
              area(x1, y1, x4, y4, x3, y3);

    float A1 = area(x, y, x1, y1, x2, y2);

    float A2 = area(x, y, x2, y2, x3, y3);

    float A3 = area(x, y, x3, y3, x4, y4);

    float A4 = area(x, y, x1, y1, x4, y4);

    return (A == A1 + A2 + A3 + A4);
}

int main()
{
    for(int i=0;i<5;i++){

    }
    int n, d, x1, y1, x2, y2, x3, y3, x4, y4, t, p, q;
    cin >> n >> d;
    x1 = 0;
    y1 = d;
    x2 = d;
    y2 = 0;
    x3 = n;
    y3 = n - d;
    x4 = n - d;
    y4 = n;
    cin >> t;
    while (t--) {
        cin >> p >> q;
        if (check(x1, y1, x2, y2, x3, y3, x4, y4, p, q))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
