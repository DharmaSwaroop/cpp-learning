# List in C++

List is a container which allows constant time insertion and removal of elements. Random access is not possible, and list is usually implemented as a doubly linked list. Both front and back operations are allowed in list but in vectors only operations at the end are allowed. Although vectors support insert() at the beginning, it is a costly operation in terms of time complexity. List stores elements of the same type, but they are not stored contiguously in memory

_header file to be included is `<list>`_

## Syntax:

```
list<type> l;
list<type> l = {val1, val2, val3, val4};  // Using Initializer list
list<type> l(5, 100);                     // Initialize all the values with single value
list<type> l(arr, arr+n);                 // Copying from an array
list<type> l(l2.begin(),l2.end());        // Copying from another list of same type
```

## Most used functions in list:

- **begin()** - Returns iterator pointing to first element in the list.  
  Complexity: O(1)  
  Syntax:
  ```
  list<type> l;
  auto it = l.begin();
  ```
- **end()** - Returns iterator pointing to location after the last element. **Not the last element**  
  Complexity: O(1)  
  Syntax:
  ```
  list<type> l;
  auto it = l.end();
  ```
- **push_back()** - Adds an element at the end of the list.  
  Complexity: O(1)  
  Syntax:
  ```
  list<type> l;
  l.push_back(val);
  ```
- **push_front()** - Adds an element at the beginning of the list.

  Complexity: O(1)  
  Syntax:

  ```
  list<type> l;
  l.push_front(val);
  ```

- **pop_front()** - Removes an element at the front of the list.

  Complexity: O(1)  
  Syntax:

  ```
  list<type> l;
  l.pop_front();
  ```

- **pop_back()** - Removes an element at the end of the list.

  Complexity: O(1)  
  Syntax:

  ```
  list<type> l;
  l.pop_back();
  ```

- **insert()** - Inserts an element at the required location or address in the list.

  Complexity: O(1) if inserting at begin() or end(), O(n) in the worst case.  
  Syntax:

  ```
  list<type> l;
  itr = l.begin();
  l.insert(itr, val);
  ```

- **emplace()** - Inserts an element at the required location or address in the list. It is more efficient than insert as it creates the object in place. Constructs the element in place, avoiding an unnecessary copy or move operation.

  Complexity: O(1) if inserting at begin() or end(), O(n) in the worst case.  
  Syntax:

  ```
  list<type> l;
  l.emplace(l.begin(),val);
  ```

- **erase()** - Removes an element at the required location or address in the list. Needs iterator pointing to the location at which the element to be deleted is present.

  Complexity: O(1) for erasing a single element, O(n) when erasing a range of elements.  
  Syntax:

  ```
  list<type> l;
  itr = l.begin();
  l.erase(itr);
  ```

- **front()** - Returns reference to the first element of the list.  
  Complexity: O(1)  
  Syntax:
  ```
  list<type> l = {1,2,3};
  type firstElement = l.front();
  ```
- **back()** - Returns reference to the last element of the list.  
  Complexity: O(1)  
  Syntax:
  ```
  list<type> l = {1,2,3};
  type lastElement = l.back();
  ```
- **clear()** - Deletes all the elements of a list.  
  Complexity: O(n)  
  Syntax:
  ```
  l.clear();
  ```
- **size()** - Returns the size of the list.  
  Complexity: O(1)  
  Syntax:
  ```
  l.size();
  ```
