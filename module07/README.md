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

### Upcasting and downcasting

	Upcasting and downcasting are terms used in object-oriented programming to describe conversions between related types.

	Upcasting is the process of converting a derived class reference or pointer to a base class reference or pointer. This is safe and can be done implicitly since a derived class is always a kind of its base class. Upcasting is useful when we need to treat an object of a derived class as an object of its base class.

	Downcasting, on the other hand, is the process of converting a base class reference or pointer to a derived class reference or pointer. This is not safe and requires explicit casting because not every base class is a derived class. Downcasting is used when we have a base class reference or pointer to an object of a derived class and want to access specific methods or properties of the derived class. If the object is not of the derived class type, the result can be undefined behavior or a runtime error.


In this exercise, we have a program that receives a string representation of a C++ literal in its most common form as a parameter. The literal must belong to one of the following scalar types: char, int, float, or double. Only decimal notation will be used for parameters other than char.

The program detects the format of the type and prints the value in the four scalar types as shown below when we send 42 as param:

![eg_conv](images/eg_conv.png)

A ```TypeFormat``` class has been implemented, which has one private string and four private methods: ```isChar()```, ```isInteger()```, ```isDouble()```, and ```isFloat()```.

The class constructor receives the string as a parameter, and each method checks its type before returning the corresponding value in one of the four scalar types: char, int, float, or double. Additionally, the ```isFloat()``` and ```isDouble()``` methods can detect pseudo types such as -inf, inff, +inf, inff, nan, or nanf in the string and return ```true``` when called.

In addition, a ```Converter``` class has been implemented, which inherits from ```TypeConverter```. Along with the standard methods, it has a public ```converterCheck()``` method.

The ```converterCheck()``` method includes an if/else tree that calls the appropriate ```TypeFormat``` methods. When a method returns true, the method calls the appropriate class to perform either an upcasting or a downcasting operation based on the value's type for the four scalar types.

There are classes for each scalar type, including:

1. CharConverter
2. IntConverter
3. FloatConverter
4. DoubleConverter.

Each class has three variables that differ based on their respective types. Additionally, there are constructors in each class that receive variables of different types to facilitate upcasting or downcasting, depending on the data value.


## Exercise 01 Serialization

### Serialization

	Serialization is the process of converting an object's state into a form that can be stored or transmitted, typically as a sequence of bytes. The opposite process of creating an object from a serialized representation is called deserialization.

	Serialization is commonly used in network communications and file storage to persist objects and transfer them between different systems or programming languages. For example, a Java program might serialize an object to transmit it over the network to a program written in a different programming language, which could then deserialize the object to reconstruct it and use its data.

	In addition to simple serialization, there are many variations and extensions, such as XML and JSON serialization, binary serialization, and custom serialization protocols. The serialization process can also be customized by implementing special methods in the serialized classes or by using external libraries or frameworks.


### Reinterpret Cast

	reinterpret_cast is a type of C++ type casting operator that is used to convert one pointer or reference to another type of pointer or reference of a different type, without changing the underlying representation of the original object.

	The reinterpret_cast operator is considered to be the most powerful and dangerous of the C++ type casting operators because it allows the programmer to bypass type safety and perform arbitrary conversions between unrelated types, even if such conversions may be undefined behavior or cause memory corruption or other errors.


In this exercise, we have just one class called 'Data', which has a private string called 'name' and an integer called 'age'. In addition to the standard constructors, the class has two public methods for serialization and deserialization.

The first method, 'uintptr_t serialize(Data* ptr)', receives a Data pointer as input and uses 'reinterpret_cast' to convert it into a 'uintptr_t', which is then returned.

The second method, 'Data* deserialize(uintptr_t raw)', takes a 'uintptr_t' value as input, uses 'reinterpret_cast' to convert it back into a 'Data' object, and then returns the modified data.

This is a simple example that demonstrates the basics of serialization."

## Exercise 02 - Identify real type

### Dynamic Cast

	Dynamic cast is a C++ language feature that allows you to perform safe downcasting of polymorphic objects at runtime. It is typically used to determine the actual type of an object when you only have a pointer or reference to its base class. Dynamic cast can check if a cast from a base class pointer/reference to a derived class pointer/reference is valid, and can return null if the cast fails. It can also be used to perform upcasting or sidestepping of inheritance. In addition, dynamic cast can throw a bad_cast exception if the cast is not valid and the cast expression has been specified using the throw keyword. Overall, dynamic cast is a useful feature for working with complex object hierarchies in C++.
	

In the last exercise, we had four classes with minimal content. One class was called 'Base', with only a destructor, while the other classes ('A', 'B', and 'C') inherited from 'Base' but had no additional content.

In 'main', there were three methods to cast these objects:

1. 'Base generate(void)', which returned a random 'Base' of type 'A', 'B', or 'C'.
2.  'void identify(Base* p)', which received a pointer of type 'Base', 'A', 'B', or 'C'. The 'if' statement checked whether dynamic casting of the pointer was successful, and if so, printed the class type.
3. 'void identify(Base& p)', which received a reference of type 'Base', 'A', 'B', or 'C'. This method used dynamic casting with a 'try-catch' block to handle any exceptions. If the cast was successful, it printed the class type, and if not, it printed an error message.

The 'if' tree in 'identify(Base* p)' was necessary because dynamic casting of the pointer could return null if it was not a valid cast. If the cast was successful, the 'identify' method printed the class type.

This exercise served as a simple example of using dynamic casting to determine the type of an object at runtime.
