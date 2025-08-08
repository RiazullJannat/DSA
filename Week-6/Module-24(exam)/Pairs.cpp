#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    int t;
    cin >> t;
    vector<pair<string, int>> v;
    for (int i = 0; i < t; i++)
    {
        string name;
        int n;
        cin >> name >> n;
        v.push_back({name, n});
    }
    sort(v.begin(), v.end(), compare);
    for (pair p : v)
        cout << p.first << " " << p.second << endl;
    return 0;
}