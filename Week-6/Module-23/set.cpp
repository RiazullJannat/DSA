#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}