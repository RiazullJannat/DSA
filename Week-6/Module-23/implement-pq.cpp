#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(12);
    pq.push(60);
    pq.pop();
    cout << pq.top();
    return 0;
}