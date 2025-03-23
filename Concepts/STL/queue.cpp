#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q1;

    /*
        Similar to stack, we cannot iterate a queue and only front and back elements of the queue can be accessed.
        Lets look into ways of printing the elements of a queue
    */
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    queue<int> q2(q1);

    cout << "q1 is: front -> ";
    int q1_size = q1.size();
    for (int i = 0; i < q1_size; i++)
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;

    /*
        Ohter commonly used fcuntions in stack
    */

    cout << "After poping all the elements of the queue" << endl;
    cout << "Is q1 empty ? " << (q1.empty() ? "Yes" : "No") << endl;

    cout << "q2 is: front -> ";
    int q2_size = q2.size();
    for (int i = 0; i < q2_size; i++)
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}