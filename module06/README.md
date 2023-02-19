# Module 06

Module 06 is divided in three exercises.

## About

In this module, we will explore the use of casting in C++ to convert between different data types, as well as the process of serialization for storing data in a format that can be easily transmitted or saved. Casting is a technique used in programming to convert one type of data into another, while serialization refers to the process of converting data into a format that can be stored or transmitted.


## Exercise 00 - Conversion of scalar types

### Casting
	Casting is a technique used in C++ to convert one data type into another. There are two main types of casting in C++: static_cast and dynamic_cast.

	Static_cast is a basic type of casting that can be used to convert between types that are related to each other, such as converting an int to a double. It can also be used to perform some limited conversions between unrelated types, such as converting a pointer to a void pointer. However, static_cast does not perform any runtime checks and can be dangerous if used incorrectly.

	Dynamic_cast, on the other hand, is used to perform type checks at runtime and can be used to safely convert between types that are related by inheritance. For example, it can be used to convert a pointer to a base class into a pointer to a derived class, as long as the object being pointed to is actually an instance of the derived class. If the object being pointed to is not an instance of the derived class, dynamic_cast will return a null pointer.

	Overall, casting in C++ is a powerful technique that can be used to manipulate and transform data in a variety of ways. However, it is important to use casting carefully and with an understanding of its limitations and potential pitfalls.



## Exercise 01



## Exercise 02 - 

