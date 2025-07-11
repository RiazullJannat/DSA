#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 2, 4, 5, 6, 2, 7, 8, 9, 10};
    list<int> l2;
    // we can assign value in 2 ways.
    l2 = l; // we will use this method for assign value.
    // l2.assign(l.begin(), l.end());
    // l2.push_back(100);
    // l2.push_front(200);
    // l2.pop_back();
    // l2.pop_front();
    // cout << *next(l2.begin(), 2) << endl;
    // l2.insert(next(l2.begin(), 2), 100);
    // l2.insert(next(l2.begin(),2),{10,20,30});
    // l2.erase(next(l2.begin(), 2),next(l2.begin(),7));
    // replace(l2.begin(), l2.end(), 2, 20);
    auto i = find(l2.begin(), l2.end(), 2);
    i == l2.end() ? cout << "Not found" << endl : cout << "found" << endl;
    for (int value : l2)
    {
        cout << value << endl;
    }
    return 0;
}