#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n / 2 == j && n / 2 == i)
            {
                cout << "X";
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (n - 1 - i == j)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl; //this is for git ;
    } //this is for another git;

    return 0;
}