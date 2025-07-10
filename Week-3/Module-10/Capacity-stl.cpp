#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3};
    cout << l.size() << endl;
    // cout << l.max_size() << endl;
    // l.clear();
    cout << l.empty() << endl;
    l.resize(2);
    for (int i : l)
    {
        cout << i << endl;
    }
    return 0;
}