#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (!v.empty())
            v.pop_back();
    }
    int top()
    {
        if (!v.empty())
            return v.back();
        return 0;
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    MyStack r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        r.push(val);
    }
    while (!r.empty())
    {
        cout << r.top() << endl;
        r.pop();
    }
    return 0;
}