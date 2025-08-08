#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> m;
    while (ss >> word)
    {
        m[word]++;
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->first << " -> " << i->second << endl;
    }

    return 0;
}