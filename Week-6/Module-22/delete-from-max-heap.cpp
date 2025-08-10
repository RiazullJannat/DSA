#include <bits/stdc++.h>
using namespace std;
void insert_max_heap(vector<int> &heap, int val)
{
    heap.push_back(val);
    int curr_ind = heap.size() - 1;
    while (curr_ind != 0)
    {
        int parent_ind = (curr_ind - 1) / 2;
        if (heap[parent_ind] < heap[curr_ind])
            swap(heap[parent_ind], heap[curr_ind]);
        else
            break;
        curr_ind = parent_ind;
    }
}
void print_heap(vector<int> heap)
{
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}
void del_from_heap(vector<int> &heap)
{
    heap[0] = heap.back();
    heap.pop_back();
    int cur_ind = 0;
    while (true)
    {
        int leftInd = (cur_ind * 2) + 1;
        int rightInd = (cur_ind * 2) + 2;
        int leftVal = INT_MIN, rightVal = INT_MIN;
        if (leftInd < heap.size())
            leftVal = heap[leftInd];
        if (rightInd < heap.size())
            rightVal = heap[rightInd];
        if (leftVal > rightVal && heap[cur_ind] < leftVal)
        {
            swap(heap[cur_ind], heap[leftInd]);
            cur_ind = leftInd;
        }
        else if (leftVal < rightVal && heap[cur_ind] < rightVal)
        {
            swap(heap[cur_ind], heap[rightInd]);
            cur_ind = rightInd;
        }
        else
        {
            break;
        }
    }
}
int main()
{
    vector<int> heap;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_max_heap(heap, val);
    }
    print_heap(heap);
    del_from_heap(heap);
    print_heap(heap);
    return 0;
}