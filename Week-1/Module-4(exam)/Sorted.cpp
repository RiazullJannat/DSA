#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        string flag = "YES";
        for (long long int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 1; j < n; j++)
        {
            if (j > 0 && a[j - 1] > a[j])
            {
                flag = "NO";
                break;
            }
        }
        
        cout << flag << endl;
    }
    return 0;
}