#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        for (int val : s)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}