#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string val;
        cin >> val;
        stack<char> st;
        for (char c : val)
        {
            if (!st.empty() && (st.top() != c))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}