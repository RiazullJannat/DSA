#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m["riaz"] = 2;
    m["sakib"] = 3;
    m["ramim"] = 1;
    m["tamim"] = 1;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " <--> " << i->second << endl;
    }
    return 0;
}