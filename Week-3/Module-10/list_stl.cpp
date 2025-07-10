#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;          // createing list without assign value.
    list<int> ll(10);     // creating list with the size;
    list<int> lll(10, 1); // creating list with the value and size;
    int a[] = {1, 2, 3, 4};
    list<int> al(a, a + 4); // creating list with the value of an array;
    // cout << lll.size();
    // for (auto i = lll.begin(); i != lll.end(); i++)
    // {
    //     cout << *i << endl;
    // }
    vector<int> v = {10, 20, 30, 40};
    list<int> vl(v.begin(), v.end()); // creating a list with the value of a vector;
    for (int val : vl)
    {
        cout << val << endl;
    }
    return 0;
}