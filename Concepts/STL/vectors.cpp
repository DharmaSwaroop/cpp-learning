#include <iostream>
#include <vector>  // Library to be included to use vectors
#include <utility> // Library to be included to use pairs
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<pair<int, int>> v2;
    vector<int> v3(5, 100);

    v1.push_back(4);

    v2.push_back({3, 2});  // You need to give the {} while using push_back for pairs
    v2.emplace_back(1, 4); // Here no need to give the {} for emplace back

    // NOTE: vector does not support front functions since it is a dynamic array and inserting at the front requires reallocation of the array which can be costly
    vector<int> v4(v3);

    vector<pair<int, int>>::iterator it2 = v2.begin(); // Here it2 is the pointer pointing to the first pair in the vector v2
    cout << (*it2).first << endl;
    cout << it2->first << endl;

    vector<int>::iterator it4 = v4.begin();
    cout << *(it4) << endl;

    /*
        Different ways of printing a vector.
    */
    for (vector<int>::iterator it3 = v3.begin(); it3 != v3.end(); it3++)
    {
        cout << *(it3) << " ";
    }
    cout << endl;

    for (auto it = v1.begin(); it != v1.end(); it++) // Here 'it' is the pointer pointing to the each element
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it : v2) // Here 'it' is the first pair itself
    {
        cout << it.first << " ";
    }
    cout << endl;

    /*
        Inseting an element in a vector
    */
    vector<int> vi(5, 10);           // {10,10,10,10,10}
    vi.insert(vi.begin(), 5);        // {5,10,10,10,10,10}
    vi.insert(vi.begin() + 1, 2, 6); // {5,6,6,10,10,10,10,10,10}

    for (auto it : vi)
    {
        cout << it << " ";
    }
    cout << endl;

    /*
        Deleting an element in a vector
    */
    v2.erase(v2.begin() + 1);
    for (auto it : v2)
    {
        cout << it.first << "," << it.second << endl;
    }

    v1.erase(v1.begin() + 1, v1.begin() + 3); // if v1 = {1,2,3,4,4}, after this erase v1 = {1,4,4}; so it deletes [start,end)
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    /*
        Other important functions
    */
    cout << v1.size() << endl;

    v1.swap(v3);
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;

    v1.clear(); // Erases entire vector

    cout << v1.empty();
}