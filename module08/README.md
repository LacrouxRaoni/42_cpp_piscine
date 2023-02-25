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

## Exercise 02 - 

