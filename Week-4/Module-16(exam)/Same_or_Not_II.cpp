#include <bits/stdc++.h>
using namespace std;
class Myqueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    myStack st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    Myqueue qe;
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
    while (!st.empty() )
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