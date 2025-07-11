#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 3, 4, 5, 67, 10, 1, 2, 4, 5, 3};
    // l.remove(1);
    // l.sort();
    // l.sort(greater<int>());
    // l.unique();
    l.reverse();
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}