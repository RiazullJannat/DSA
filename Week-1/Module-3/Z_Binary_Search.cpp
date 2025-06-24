#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    sort(a.begin(), a.end());
    for (int i = 0; i < q; i++)
    {
        int l = 0, r = n - 1;
        string flag = "not found";
        cin >> x;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = "found";
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << flag << endl;
    }
    return 0;
}