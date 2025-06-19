#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    cout << v.size() << endl;
    cout << v.max_size() << endl;
    v.clear();
    cout << v.size() << endl;
    cout << v[0] << endl;
    v.push_back(100);
    cout << v[0] << endl;
    cout << v.empty() << endl;
    v.resize(0);
    cout << v.size() << endl;
    v.resize(5, 50);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}