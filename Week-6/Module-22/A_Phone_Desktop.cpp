#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int cellB = b != 0 ? ceil((float)b / (float)2) * 15 : 0;
        int extra = cellB - (4 * b);
        int display = 0;
        if (extra < a)
        {
            int c = a - extra;
            cellB += c;
        }
        display = ceil((float)cellB / 15);
        cout << display << endl;
    }
    return 0;
}