# Queue in C++

Queue is a container which operates in FIFO context. FIFO stands for First In First Out. This is similar to real world queues for a movie ticket where the first person in queue will be the first to get the ticket. Insertion of elements will be hapenning at one end called back and deletion of elements will be happening from other end called front.

Similar to stack, you can't access elemnts of a Queue using index. All operations take place in O(1) complexity in queue.

_header file to be included is `<queue>`_

## Syntax:

```
queue<type> q;
queue<type> q2(q1);                       // Copy constructor. Copies elements of q1 to q2.
```

## Most used functions in queue:

- **front()** - Returns reference to the front element in the queue.  
  Complexity: O(1)  
  qyntax:
  ```
  queue<type> q;
  type frontElement = q.front();
  ```
- **back()** - Returns reference to the back element of the queue.  
  Complexity: O(1)  
  Syntax:

  ```
  queue<type> q;
  type backElement = q.back();
  ```

- **push()** - Adds an element at the back of the queue.  
  Complexity: O(1)  
  Syntax:

  ```
  queue<type> q;
  q.push(element);
  ```

- **pop()** - Removes the front element of the queue.  
  Complexity: O(1)  
  Syntax:

  ```
  queue<type> q;
  st.pop();
  ```

- **emplace()** - Works similar to push, but faster. Constructs an element in place  
  Complexity: O(1)  
  Syntax:

  ```
  queue<type> q;
  q.emplace(element);
  ```

- **size()** - Gives the size of the queue.  
  Complexity: O(1)  
  Syntax:

  ```
  queue<type> q;
  int size = q.size();
  ```

- **empty()** - Returns true if the queue is empty.  
  Complexity: O(1)  
  Syntax:
  ```
  queue<type> q;
  bool IsEmpty = q.empty();
  ```
