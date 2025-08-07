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
    if (s.count(40))
        cout << "ache" << endl;
    else
        cout << "nai" << endl;
    return 0;
}