#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ex;
    cin >> ex;
    v.push_back(ex);
    int curr_ind = v.size() - 1;
    while (curr_ind != 0)
    {
        int parent_ind = (curr_ind - 1) / 2;
        if (v[parent_ind] < v[curr_ind])
            swap(v[parent_ind], v[curr_ind]);
        else
            break;
        curr_ind = parent_ind;
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}