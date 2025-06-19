#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // to assign value in a vector there are 2 method.
    // method 1
    // v = {1, 2, 3, 4};
    // method 2
    v.assign({1, 2, 3, 4, 5});
    v.push_back(6);                           // this function add the element at the last of the vector.
    v.pop_back();                             // this function remove an element at the last of the vector.
    v.insert(v.begin() + 2, {100, 200, 300}); // this function can insert where the pointer points
    v.erase(v.begin() + 3, v.end() - 3);      // this function erase values from pointer to pointer.
    replace(v.begin(), v.end(), 2, 200);      // this function can replace a value in a range.
    vector <int>:: iterator it = find(v.begin(), v.end(), 100);
    for (int i : v)
    {
        cout << i << " ";
    }
    if(it == v.end())
    {
        cout << "No....";
    }
    else 
    {
        cout << "Yes....";
    }
    return 0;
}