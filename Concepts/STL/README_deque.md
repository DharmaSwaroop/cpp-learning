# Deque in C++

Double ended Queues are sequence containers with dynamic sizes and with feature of expansion and contraction on both ends. It has all the functions similar to vector and list. It works similarly to a vector in supporting random access but provides faster insertions and deletions at both ends. Unlike vectors, deques do not guarantee contiguous memory allocation.

It is generally implemented in the form of a dynamic array of fixed-size memory blocks. Random access is allowed, but insertions in the middle of a deque are slower compared to lists due to element shifting. In lists (std::list), we can insert elements anywhere in O(1) time by adjusting pointers, unlike deque where shifting may be required.

_header file to be included is <deque>_

## Syntax:

```
deque<type> dq;
deque<type> dq = {val1, val2, val3, val4};    // Using Initializer deque
deque<type> dq(5, 100);                       // Initialize all the values with single value
deque<type> dq(arr, arr+n);                   // Copying from an array
deque<type> dq(dq2.begin(),dq2.end());        // Copying from another deque of same type
```

## Most used functions in deque:

- **begin()** - Returns iterator pointing to first element in the deque.  
  Complexity: O(1)  
  Syntax:
  ```
  deque<type> dq;
  auto it = dq.begin();
  ```
- **end()** - Returns iterator pointing to location after the last element. **Not the last element**  
  Complexity: O(1)  
  Syntax:
  ```
  deque<type> dq;
  auto it = dq.end();
  ```
- **push_back()** - Adds an element at the end of the deque.  
  Complexity: O(1)  
  Syntax:
  ```
  deque<type> dq;
  dq.push_back(val);
  ```
- **push_front()** - Adds an element at the beginning of the deque.

  Complexity: O(1)  
  Syntax:

  ```
  deque<type> dq;
  dq.push_front(val);
  ```

- **pop_front()** - Removes an element at the front of the deque.

  Complexity: O(1)  
  Syntax:

  ```
  deque<type> dq;
  dq.pop_front();
  ```

- **pop_back()** - Removes an element at the end of the deque.

  Complexity: O(1)  
  Syntax:

  ```
  deque<type> dq;
  dq.pop_back();
  ```

- **insert()** - Inserts an element at the required location or address in the deque.

  Complexity: O(1) amortized if inserting at begin() or end(), O(n) in the middle.  
  Syntax:

  ```
  deque<type> dq;
  itr = dq.begin();
  dq.insert(itr, val);
  ```

- **emplace()** - Inserts an element at the required location or address in the deque. It is more efficient than insert as it creates the object in place. Constructs the element in place, avoiding an unnecessary copy or move operation.

  Complexity: O(1) amortized if inserting at begin() or end(), O(n) in the middle.  
  Syntax:

  ```
  deque<type> dq;
  dq.emplace(dq.begin(),val);
  ```

- **erase()** - Removes an element at the required location or address in the deque. Needs iterator pointing to the location at which the element to be deleted is present.

  Complexity: O(n)  
  Syntax:

  ```
  deque<type> dq;
  itr = dq.begin();
  dq.erase(itr);
  ```

- **front()** - Returns reference to the first element of the deque.  
  Complexity: O(1)  
  Syntax:
  ```
  deque<type> dq = {1,2,3};
  type firstElement = dq.front();
  ```
- **back()** - Returns reference to the last element of the deque.  
  Complexity: O(1)  
  Syntax:
  ```
  deque<type> dq = {1,2,3};
  type lastElement = dq.back();
  ```
- **clear()** - Deletes all the elements of a deque.  
  Complexity: O(n)  
  Syntax:
  ```
  dq.clear();
  ```
- **size()** - Returns the size of the deque.  
  Complexity: O(1)  
  Syntax:
  ```
  dq.size();
  ```
