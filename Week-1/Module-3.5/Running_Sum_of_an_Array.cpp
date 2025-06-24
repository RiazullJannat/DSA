#include <bits/stdc++.h>
using namespace std;
void running_sum(vector<int> a, int n)
{
    vector<int> sum(n);
    sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = a[i] + sum[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    running_sum(a, n);
    return 0;
}