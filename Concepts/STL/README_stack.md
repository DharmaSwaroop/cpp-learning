# Stack in C++

Stack is a container which operates in LIFO context. LIFO stands for Last In First Out where the operations are done at only one end of the container know as top, and most recently added element will be removed first and first inserted element will be removed last.

Unlike vectors, elements in the stack cannot be accessed using index numbers. Stacks can be implements using either Arrays or Linked Lists where top is simply the head of the linked list.

_header file to be included is `<stack>`_

## Syntax:

```
stack<type> st;
stack<type> st2(st1);                       // Copy constructor. Copies elements of st1 to st2.
```

## Most used functions in stack:

- **top()** - Returns reference to the top element in the stack.  
  Complexity: O(1)  
  Syntax:
  ```
  stack<type> st;
  type topElement = st.top();
  ```
- **push()** - Adds an element to the top of the stack.  
  Complexity: O(1)  
  Syntax:

  ```
  stack<type> st;
  st.push(element);
  ```

- **pop()** - Removes the top element of the stack.  
  Complexity: O(1)  
  Syntax:

  ```
  stack<type> st;
  st.pop();
  ```

- **emplace()** - Works similar to push, but faster. Constructs an element in place  
  Complexity: O(1)  
  Syntax:

  ```
  stack<type> st;
  st.emplace(element);
  ```

- **size()** - Gives the size of the stack.  
  Complexity: O(1)  
  Syntax:

  ```
  stack<type> st;
  int size = st.size();
  ```

- **empty()** - Returns true if the stack is empty.  
  Complexity: O(1)  
  Syntax:
  ```
  stack<type> st;
  bool IsEmpty = st.empty();
  ```
