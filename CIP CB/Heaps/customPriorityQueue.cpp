#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    int age;
    string name;
    Person(string s, int n)
    {
        age = n;
        name = s;
    }
};
class customComparator
{
public:
    bool operator()(Person A, Person B)
    {
        return A.age < B.age;
    }
};
int main()
{
    priority_queue<Person, vector<Person>, customComparator> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int age;
        cin >> s >> age;
        Person p(s, age);
        pq.push(p);
    }
    int k = 3;
    while (k--)
    {
        Person p = pq.top();
        cout << p.name << " " << p.age << endl;
        pq.pop();
    }
    return 0;
}
