# Vectors in C++

A vector is a dynamically allocated array that can grow or shrink in size as needed. Elements in a vector are stored in contiguous memory locations. It is a part of the Standard Template Library (STL).

In an array, when we want to add or remove an element, we have to again reallocate the array at different memory location and copy all the elements to that array. This is time consuming. Thus, vectors do not reallocate memory on every insertion or deletion; they only reallocate when their capacity is exceeded.

_header file to be included is `<vector>`_

## Syntax:

```
vector<type> v;
vector<type> v = {val1, val2, val3};   // Using Initializer list
vector<type> v(n,val);                 // Initializes a vector of size n with all elements set to val
vector<type> v(arr, arr+n);            // Copying elements from another array
vector<type> v(v1.begin(), v1.end());  // Copying elements from another vector v1
```

## Most used functions in vectors:

- **begin()** - Returns an iterator pointing to the first element in the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  auto it = v.begin();
  ```
- **end()** - Returns an iterator pointing to the position just after the last element. **Not the last element**  
  Complexity: O(1)  
  Syntax:
  ```
  auto it = v.end();
  ```
- **push_back()** - Adds an element at the end of the vector and resizes it if required.  
  Complexity: O(1)  
  Syntax:
  ```
  vector<type> v;
  v.push_back(val);
  ```
- **insert()** - Adds element at the required location or address.  
  Complexity: O(n)  
  Syntax:
  ```
  auto it = v.begin();
  v.insert(it+2, 5);   // Inserts 5 at the 3rd place of the vector
  ```
- **emplace()** - Adds element at the required location or address. This is more efficient than insert because it creates the object in place.

  Complexity: O(n)  
  Syntax:

  ```
  auto it = v.begin();
  v.emplace(it+2, val);   // Inserts 5 at the 3rd place of the vector
  ```

- **emplace_back()** - Adds element at the end of the the vector. **Faster than push_back() in some cases, as it constructs the object in place.**  
  Complexity: O(1)  
  Syntax:
  ```
  vector<type> v;
  v.emplace_back(val);
  ```
- **pop_back()** - Removes element from the end of the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  vector<type> v;
  v.pop_back();
  ```
- **erase()** - Removes element front the required location. Needs iterator pointing to the location at which the element to be deleted is present.  
  Complexity: O(n)  
  Syntax:
  ```
  auto it = v.begin()+2;
  v.erase(it);
  ```
- **clear()** - Deletes all the elements of a vector.  
  Complexity: O(n)  
  Syntax:
  ```
  v.clear();
  ```
- **empty()** - Returns true if the vector is empty.  
  Complexity: O(1)  
  Syntax:
  ```
  bool isEmpty = v.empty();
  ```
- **size()** - Returns the size of the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  v.size();
  ```
- **front()** - Returns a reference to the first element of the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  vector<type> v = {1,2,3};
  type firstElement = v.front();
  ```
- **back()** - Returns reference to the last element of the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  vector<type> v = {1,2,3};
  type lastElement = v.back();
  ```

## How Does Vectors work ?

If you want to implement a vector from scratch, these are the minimum requirements:

- To create a vector v(), time complexity should be O(1)
- To create a vector v(n,x), time complexity should be O(n)
- To fetch an element at i v[i], time complexity should be O(1)
- To find the size(), time complexity should be O(1)
- push_back() should have a time complexity of O(1) on average.
- pop_back() should be of time complexity O(1)
- insert() should be of time complexity O(size()) &nbsp;&nbsp;&nbsp;&nbsp; // This is worst case scenario
- erase() should be of time complexity O(size()) &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // This is worst case scenario
- front(), back() should be of time complexity O(1)

**The implementation part:**  
Lets say, we have an class named "vector" with member variables size, capacity and pointer to elements. So, when is create an object of class vector, we actually allocate some memory in the heap with some capacity. Size represents the number of elements in the vector, while capacity represents the allocated memory. So, what happens when we add number of elements to the vector which exceeds its capacity? In this case we simply increase the capacity by multiplying it to 2 and this goes on.

Then we have member functions like constructors, destructor, Size, Capacity, IsEmpty, PushBack, PopBack, insert, erase, front.

**_\*Note: The implementation for the above class will be added soon and will be discussed in depth later._**
