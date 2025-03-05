#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<pair<int, int>> v2;
    vector<int> v3(5, 100);

    v1.push_back(4);

    v2.push_back({3, 2});  // You need to give the {} while using push_back for pairs
    v2.emplace_back(1, 4); // Here no need to give the {} for emplace back

    vector<int> v4(v3);

    vector<pair<int, int>>::iterator it2 = v2.begin(); // Here it2 is the address pointing to the first pair in the vector v2
    cout << (*it2).first << endl;
    cout << it2->first << endl;

    vector<int>::iterator it4 = v4.begin();
    cout << *(it4) << endl;

    for (vector<int>::iterator it3 = v3.begin(); it3 != v3.end(); it3++)
    {
        cout << *(it3) << " ";
    }
    cout << endl;

    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it : v2)
    {
        cout << it.first << " ";
    }
    cout << endl;
}