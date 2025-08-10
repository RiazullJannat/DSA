#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        int moveForA = 0, moveForB = 0;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << 1 << endl;
        }
        else if (c > b)
        {
            int bToc = c - b;
            int cTo1 = c - 1;
            moveForB = bToc + cTo1;
        }
        else
        {
            moveForB = b - 1;
        }
        moveForA = a - 1;
        if (a != 1 && moveForA == moveForB)
            cout << 3 << endl;
        else if (a != 1)
        {
            moveForA < moveForB ? cout << 1 << endl : cout << 2 << endl;
        }
    }

    return 0;
}