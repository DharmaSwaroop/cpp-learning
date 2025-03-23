#include <iostream>
#include <stack>

using namespace std;

int main()
{
    /*
        Declaring a stack
    */
    stack<int> st1;

    /*
        We Cannot iterate a stack, instead we can add, remove and access the element at the top of the stack.
        Lets look into the ways of printing the elements of a stack.
    */
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    stack<int> st2(st1);
    /*
        But this will not preserve the initial stack which we are printing.
    */
    cout << "st1 is: Top -> ";
    int st1_size = st1.size();
    for (int i = 0; i < st1_size; i++)
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;

    /*
        Ohter commonly used fcuntions in stack
    */
    cout << "After poping all the elements of st1" << endl;
    cout << "Is st1 Empty ? " << (st1.empty() ? "Yes" : "No") << endl;

    cout << "st2 is: Top -> ";
    int st2_size = st2.size();
    for (int i = 0; i < st2_size; i++)
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl;

    return 0;
}