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
    r.push(10);
    r.push(20);
    r.push(30);
    cout << r.top() << endl;
    r.pop();
    r.pop();
    r.pop();
    r.pop();
    cout << r.top() << endl;
    return 0;
}