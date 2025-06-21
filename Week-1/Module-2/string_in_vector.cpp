#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    for (string s : a)
    {
        cout << s << endl;
    }
    return 0;
}