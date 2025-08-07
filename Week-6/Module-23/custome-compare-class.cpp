#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmf
{
public:
    bool operator()(Student left, Student right)
    {
        if (left.marks < right.marks)
            return true;
        else if (left.marks > right.marks)
            return false;
        else
            return left.roll < right.roll;
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmf> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        Student temp = pq.top();
        cout << temp.name << " " << temp.roll << " " << temp.marks << endl;
        pq.pop();
    }
    return 0;
}