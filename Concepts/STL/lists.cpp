#include <iostream>
#include <list>
#include <utility>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2 = {1, 2, 3};
    list<int> l3(5, 100);
    list<pair<int, int>> l4 = {{1, 2}, {3, 4}};
    list<float> l6;
    list<int> l5(l1);

    l1.push_back(4);
    l1.push_back(5);
    l1.push_front(1);
    l1.push_front(9);

    /*
        Different ways of iterating a list
    */
    cout << "l1 is: ";
    for (list<int>::iterator it1 = l1.begin(); it1 != l1.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;

    cout << "l1 is: ";
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "l1 is: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "l4 is: ";
    for (auto it = l4.begin(); it != l4.end(); it++)
    {
        cout << it->first << ":" << it->second << " ";
    }
    cout << endl;

    cout << "l4 is: ";
    for (auto it = l4.begin(); it != l4.end(); it++)
    {
        cout << (*it).first << ":" << (*it).second << " ";
    }
    cout << endl;

    /*
        Inserting an element into a list
    */

    l1.insert(next(l1.begin(), 2), 7);

    cout << "l1 is: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << endl;

    l1.insert(next(l1.begin(), 3), 3, 3);

    cout << "l1 is: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << endl;

    l4.insert(l4.begin(), {5, 6});
    l4.emplace(next(l4.begin(), 1), 7, 8); // Here I did not pass the object (pair), insteas it created the object in place by itself. That the avantage of emaplace over the insert function.

    cout << "l4 is: ";
    for (auto it = l4.begin(); it != l4.end(); it++)
    {
        cout << (*it).first << ":" << (*it).second << " ";
    }
    cout << endl;

    /*
        Removing an element from a list
    */
    l1.erase(next(l1.begin(), 3));

    cout << "l1 is: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << endl;

    l1.erase(next(l1.begin(), 2), next(l1.begin(), 5));

    cout << "l1 is: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << endl;

    /*
        Other important functions
    */
    cout << "Is l1 empty ? " << (l1.empty() ? "Yes" : "No") << endl; // Here ternary operator is being used
    cout << "Is l5 empty ? " << (l6.empty() ? "yes" : "No") << endl; // Here ternary operator is being used

    cout << "The size of the list l1 is: " << l1.size() << endl;
    cout << "The size of the list l5 is: " << l5.size() << endl;
    cout << "The size of the list l4 is: " << l4.size() << endl;

    l1.swap(l3);
    cout << "l1 is: ";
    for (auto it : l1)
    {
        cout << it << " ";
    }
    cout << endl;
}