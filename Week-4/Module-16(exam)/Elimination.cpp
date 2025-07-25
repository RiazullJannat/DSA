#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack<int> st;
        string val;
        cin >> val;
        for (char v : val)
        {
            if (!st.empty() && (st.top() == '0' && v == '1'))
            {
                st.pop();
                continue;
            }
            else
            {
                st.push(v);
            }
        }
        st.empty() ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}