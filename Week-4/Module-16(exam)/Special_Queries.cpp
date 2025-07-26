#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> qe;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        string name;
        cin >> val;
        if (val == 0)
        {
            cin >> name;
            qe.push(name);
        }
        else
        {
            if (qe.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << qe.front() << endl;
                qe.pop();
            }
        }
    }
    return 0;
}