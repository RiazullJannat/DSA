#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> freq(26);
    for (int i = 0; i < s.size(); i++)
    {
        int ind = (int)s[i] - 97;
        freq[ind]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            cout << (char)(i + 97) << " : " << freq[i] << endl;
        }
    }
    return 0;
}