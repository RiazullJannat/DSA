#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v[0] << endl; // accessing element using [];
    cout << v.at(0)<< endl; // accessing element using at();
    cout << v.back()<< endl; // accessing last element of the vector using back();
    cout << v[v.size()-1]<< endl; // accessing last element of the vector using [v.size()-1];
    cout << v.front()<< endl; // accessing first element using front();
    cout << v[0]<< endl; // also accessing first element using v[0];
    return 0;
}