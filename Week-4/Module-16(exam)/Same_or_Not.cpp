#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> qe;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qe.push(val);
    }
    string flag = "YES";
    if (n != m)
    {
        flag = "NO";
    }
    while (!st.empty())
    {
        if (st.top() != qe.front())
        {
            flag = "NO";
            break;
        }
        st.pop();
        qe.pop();
    }
    cout << flag << endl;
    return 0;
}