# Vectors
Vector is a dynamically allocated array which can increase or decrease in size. It is a part of the STL

In an array, when we want to add or remove an element, we have to again reallocate the array at different memory location copy all the elements to that array. This is time consuming. Thus, vectors won't reallocate every time we add or remove an element.

## Syntax:
```
vector<type> v;  
vector<type> v = {val1, val2, val3};   // Using Initializer list  
vector<type> v(n,val);                 // Initialize all the values with single value
vector<type> v() = {arr, arr+n}        // Copying elements from another array
vector<type> v(v1.begin(), v1.end())   // Copying elements from another vector v1 
```
## Most used functions in vectors:    
* **begin()** - Returns iterator pointing to first element in the vector.  
  Complexity: O(1)  
  Syntax:  
  ```
  auto it = v.begin();
  ```
* **end()** - Returs iterator pointing to location after the last element. **Not the last element**  
  Complexity: O(1)  
  Syntax:
  ```
  auto it = v.end();
  ```
* **push_back()** - Adds an element at the end of the vector and resizes it if required.  
  Complexity: O(1)  
  Syntax:
  ```
  vector<type> v; 
  v.push_back(val);
  ```
* **insert()** - Adds element at the required location or address.  
  Complexity: O(n)  
  Syntax:  
  ```
  auto it = v.begin();
  v.insert(it+2, 5);   // Inserts 5 at the 3rd place of the vector
  ```
* **emplace_back()** - Adds element at the end of the the vector. **faster than push_back theoritically.**  
  Complexity: O(1);  
  Syntax:
  ```
  vecotr<type> v;
  v.emplace_back(val);
  ```
* **pop_back()** - Removes element from the end of the vector.  
  Complexity: O(1);  
  Syntax:
  ```
  vector<type> v;
  v.pop_back(val);
  ```
* **erase()** - Removes element fromt the required location. Needs iterator pointig to the location at which the element to be deleted is present.  
  Complexity: O(n)  
  Syntax:
  ```
  auto it = find(v.begin(), v.end(), f);
  v.erase(it);
  ```
* **clear()** - Deletes all the elements of a vector.  
  Complexity: O(n)  
  Syntax:
  ```
  v.clear();
  ```
* **empty()** - Returns true if the vector is empty.  
  Complexity: O(1)  
  Syntax:
  ```
  bool emt = v.empty();
  ```
* **size()** - Returns the size of the vector.  
  Complexity: O(n)  
  Syntax:
  ```
  v.size();
  ```
* **front()** - Returns referense to the first element of the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  type firstElement = v.front();
  ```
* **back()** - Returns reference to the last element of the vector.  
  Complexity: O(1)  
  Syntax:
  ```
  type lastElement = v.back();
  ``` 

## How Does Vectors work ?
If you want to implement a vector from groud up, these are the minimum requirements:
* To create a vector v(), time complexity should be O(1)
* To create a vector v(n,x), time complexity should be O(n)
* To fetch an element at i v[i], time complecity should be O(1)
* To find the size(), time complexity should be O(1)
* push_back() should of time complexity O(1)
* pop_back() should be of time complexity O(1)
* insert() should be of time complexity O(size())  &nbsp;&nbsp;&nbsp;&nbsp;   // This is worst case scenario
* erase() should be of time complexity O(size())   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   // This is worst case scenario
* front(), back() should be of time complexity O(1)

**The implementation part:**  
Lets say, we have an class named "vector" with member variables size, capacity and pointer to elements. So, when is create an object of class vector, we actually allocate some memoey in the heap with some capacity. capacity is something which we allocate for additional use in case if we want to add elements to the vectors. Size is the number of elements in the vector. So, what happens when we add number of elements to the vector which exceeds its capacity? In this case we simply increase the capacity by multiplying it to 2 and this goes on.  

Then we have member functions like constructors, destructor, Size, Capacity, IsEmpty, PushBack, PopBack, insert, erase, front.

***\*Note: The implementation for the above class will be added soon and will be discussed in depth later.***
