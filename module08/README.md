# Module 08

Module 08 is divided in three exercises.

## About

This is the final module of the CPP Piscine, where we learn about the Standard Template Library (STL) in C++. This module prepares us for our next challenge: building our own containers.

### Containers

	In C++, a container is a data structure that stores a collection of objects or values. C++ provides several types of containers, including:

	    - Sequence containers: These containers store elements in a linear sequence, such as a std::vector, std::list, or std::deque.

	    - Associative containers: These containers store elements in a sorted order based on their keys, such as a std::set, std::map, std::multiset, or std::multimap.

	    - Container adaptors: These containers provide a specific interface for a given container type, such as std::stack, std::queue, and std::priority_queue.

	Containers are an essential part of C++ programming, providing a convenient and efficient way to store and manipulate collections of data. They are also an important part of the C++ Standard Template Library (STL), which provides a set of powerful and flexible algorithms and containers that can be used in a wide range of applications.

## Exercise 00 - Easy find

The first exercise is quite simple. We create a template method called ```easyfind()```.

```easyfind()``` receives two parameters:

1. A type ```T``` that receives a container.
2. An integer value.

The function iterates the container using ```std::find()``` and returns the first occurrence of the value ```n``` in the container.

The ```main``` method has tests with list, vector, and deque containers.

However, it's worth noting that this method doesn't handle associative containers.

## Exercise 01 - Span
In this exercise, we are creating a class called ```Span```. The ```Span``` class has the following:

1. A private unsigned integer ```n```.
2. A private ```std::list<int> lst```.
3. A public constructor that sets ```n``` to 0.
4. A parameterized constructor that receives an unsigned integer ```n```.
5. A destructor.
6. A copy constructor.
7. An overloaded ```operator=```.
8. A getter for ```n```.
9. A method called ```addNumber()``` that receives a new integer ```new_n``` to add to the list. If the list is full, it throws an exception.
10. A ```shortestSpan()``` method that returns the minimum range between the elements in the list.
11. A ```longestSpan()``` method that returns the maximum range between the elements in the list.
12. An ```addManyNumbers()``` method that receives a range of iterators from the beginning to the end to include elements in the Span list.
13. A ```checkListElements()``` method that verifies if the element is empty or if it has only one element. If either of these conditions is true, it throws an exception.
14. A subclass that inherits from ```std::exception``` to handle custom exceptions.

The ```Span``` class stores a maximum of ```N``` elements in a list, and the ```shortestSpan()``` and ```longestSpan()``` methods check the range limits between the numbers.

The ```std::list``` has the ```sort()``` method that makes it easier to check the range. The entire program follows an "STL style" to understand how to handle containers.

## Exercise 02 - 

