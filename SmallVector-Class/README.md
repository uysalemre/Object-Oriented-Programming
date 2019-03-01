# SmallVector-Class

RUN THIS CODE ?

YOU CAN USE VISUAL STUDIO IDE IN WINDOWS.
YOU CAN USE THIS IN LINUX 

        g++ SmallVector.h SmallVector.cpp main.cpp -o output
        ./output

WHAT IS VECTOR ?

Vector is a container, which can hold data of arbitrary sizes. The difference between a 
standard C++ Vector and the SmallVector class that you are going to implement in this 
assignment is that you will avoid dynamic memory allocation for small sized data. Since 
dynamic memory allocation is a time consuming process compared to static memory 
allocation, it is generally a good idea to avoid dynamic allocation for small sized data.

IMPLEMENTATION DETAILS

In the class, you will define two buffers: Static Buffer (which is an integer array) and Dynamic 
Buffer (which is an integer pointer). For this assignment, the static buffer’s size should be 32. 
You should put the given data in the static buffer as long as it is not full. When the static 
buffer reaches its maximum capacity, you will allocate new memory space to store new 
values. For example, let’s say you need to keep 35 elements (integers) in the vector. Since 
the size of the static buffer is 32, you should allocate new memory space to store the
remaining 3 elements.
Additionally, you should keep track of the size and capacity of vector. The size of the vector 
is the number of elements in the vector, while the capacity of the vector is the allocated 
memory space. For example, assume there are 10 elements in the vector. In this situation,
although the vector’s size is 10, its capacity is 32 since we can keep 32 elements in the static 
buffer (as pre-allocated). However, when there is some dynamically allocated memory, you 
should also take into consideration that memory space for calculating capacity. 
You are expected to implement following functionalities:

  Constructor: The constructor should optionally take an integer array and its size as 
parameters. In addition, you are expected to provide a copy constructor.

  push_back: takes an element (integer) as parameter and adds it at the end of the 
SmallVector. Furthermore, you need to implement an overloaded version of this 
function that takes an integer array and its size as parameters.

  pop_back: removes the last element from SmallVector and returns its value.

  reverse: returns current elements in reverse order as a SmallVector object. 

  + operator: concatenates two SmallVectors and returns the resulting 
SmallVector.

  * operator: takes an integer and replicates the elements in the SmallVector
accordingly and returns them as a SmallVector object. 
Calling * operator with 5 as parameter means that it 
should return a SmallVector object that contains five 0’s ([0] * 5 = [0,0,0,0,0]).

  [] operator: This operator takes an integer and acts as in arrays for positive numbers. 
However, for negative numbers, it should act in reverse order. For example, [-2] 
should return the second last element of a SmallVector. 

If the given index number is out of the SmallVector’s range, it should return the
last element for positive numbers and the first element for negative numbers. Note 
that, it should be possible to modify the elements of a SmallVector by using the 
subscript operator.

  = operator: You need to provide an assignment operator that supports chaining.
