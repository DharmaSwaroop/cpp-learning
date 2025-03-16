#include <iostream>
#include <deque>
#include <utility>

using namespace std;

int main()
{
    deque<int> dq1;
    deque<int> dq2(5, 100);
    deque<pair<int, int>> dq3 = {{1, 2}, {3, 4}};
    deque<int> dq4 = {8, 9, 10};
    deque<int> dq5;

    dq1.push_back(1);
    dq1.push_back(2);
    dq1.push_back(3);
    dq1.push_back(4);

    /*
        Different ways of iterating a deque
    */
    cout << "dq1 is: ";
    for (deque<int>::iterator it = dq1.begin(); it != dq1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "dq3 is: ";
    for (deque<pair<int, int>>::iterator it = dq3.begin(); it != dq3.end(); it++)
    {
        cout << it->first << ":" << it->second << " ";
    }
    cout << endl;

    cout << "dq3 is: ";
    for (deque<pair<int, int>>::iterator it = dq3.begin(); it != dq3.end(); it++)
    {
        cout << (*it).first << ":" << (*it).second << " ";
    }
    cout << endl;

    cout << "dq2 is: ";
    for (auto it = dq2.begin(); it != dq2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "dq3 is: ";
    for (auto it : dq3)
    {
        cout << it.first << ":" << it.second << " ";
    }
    cout << endl;

    cout << "dq4 is: ";
    for (auto it : dq4)
    {
        cout << it << " ";
    }
    cout << endl;

    /*
        Inserting eleents into deque
    */
    auto it1 = dq1.begin();
    dq1.insert(it1 + 2, 2);

    cout << "dq1 is: ";
    for (auto it : dq1)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "The forth element is dq1 is: " << dq1[3] << endl; // Trying the random access

    /*
        Removing an element from a deque
    */
    auto it = dq2.begin();
    dq2.erase(it);

    cout << "dq2 is: ";
    for (auto it : dq2)
    {
        cout << it << " ";
    }
    cout << endl;

    dq3.erase(dq3.end() - 1);
    cout << "dq3 is: ";
    for (auto it : dq3)
    {
        cout << it.first << ":" << it.second << " ";
    }
    cout << endl;

    /*
        Other useful function in deque
    */
    cout << "The first element in the dq3 is: " << (dq3.front()).first << ":" << (dq3.front()).second << endl;
    cout << "The last element in dq4 is: " << dq4.back() << endl;
    cout << "The size of dq2 is: " << dq2.size() << endl;
    cout << "Is dq1 empty?: " << (dq1.empty() ? "Yes" : "No") << endl;
    cout << "Is dq5 empty?: " << (dq5.empty() ? "Yes" : "No") << endl;

    // lets swap dq1 and dq5
    dq1.swap(dq5);
    cout << "After swapping dq1 and dq5" << endl;
    cout << "dq1 is: ";
    for (auto it : dq1)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "dq5 is: ";
    for (auto it : dq5)
    {
        cout << it << " ";
    }
    cout << endl;

    dq5.clear();
    cout << "After clearing dq5" << endl;
    cout << "dq5 is: ";
    for (auto it : dq5)
    {
        cout << it << " ";
    }
    cout << endl;
}
