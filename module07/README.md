<p align="center">
  <img src="images/grade.png" alt="grade " />
</p>

# Module 07

Module 07 is divided in three exercises.

## About

In this module, we will learn about templates and explore some of their key features.

### Templates
	Templates are a key feature in programming that enable the creation of generic code that can be used with multiple data types. They allow programmers to write code once and apply it to many different scenarios, improving code reusability and reducing duplication. Templates are commonly used in programming languages such as C++, Java, and Python, and are an essential tool for creating efficient and flexible code.

## Exercise 00 - Start with a few functions

In this exercise, we created our first templates. There are three templates in this exercise that can receive any type of value. Firstly, a 'swap' method template that takes two values and swaps them. Secondly, a 'min' template method that takes two values, checks which is the minimal value and returns it. If the values are equal, the second value received as a parameter is returned. Finally, a 'max' template method that receives two values and checks which is the maximum value to return. If the values are equal, the second parameter received is returned.

The main file includes custom tests for all the methods and types.


## Exercise 01 - Iter

In this exercise, we created our own iterator template that can receive three parameters: the address of an array, the length of the array, and a pointer function that is called on every element of the array.

The iterator template can handle any type of array, and custom tests have been included in the main function.

## Exercise 02 - Array

In the last exercise, we created a template class called "Array". There are mandatory data that must be included in this array, which are explained below:

There are two private attributes:

1. ```T* arr ``` (which is an array of the template type).
2.  ```unsigned int length ``` with the size of this array.

In the public section, we have the following methods:

- A standard constructor that sets  ```arr ``` and  ```length ``` to NULL.
- A parameterized constructor that receives an unsigned int  ```n ```. This constructor instantiates a new array of type  ```T ``` with size  ```n ```.
- A destructor to delete the  ```arr ```.
- A copy constructor that performs a deep copy of the object received.
- An  ```operator= ``` overload.
- A  ```T& operator[] ``` that receives an integer index. This method checks if the index is out of range and throws an exception; otherwise, it returns  ```arr[index] ```.
- A method  ```size() ``` that returns the  ```length ```.
- Finally, a  ```print() ``` method that prints the data in  ```arr ```.

The main method has tests to check if everything is working properly.
