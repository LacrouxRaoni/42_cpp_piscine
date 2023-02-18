# Module 05

Module 05 is divided in four exercises.

## About

In this module, we will learn about error handling using the try and catch statements. These statements allow us to catch and handle exceptions that might occur in our code. By handling exceptions properly, we can prevent our programs from crashing and provide a better user experience. We will also learn about different types of exceptions and how to create custom exceptions to handle specific situations. By the end of the module, you will have a better understanding of how to handle exceptions in your code effectively.


## Exceptions: 

	In C++, an exception is a runtime error that can occur during the execution of a program. When an exception is thrown, the program searches for a catch block that can handle the exception. If a catch block is found, the exception is handled; otherwise, the program terminates.

	In C++, exceptions can be thrown using the throw keyword. When an exception is thrown, it can be of any type, including built-in types, user-defined types, and standard library types.

	To handle exceptions, C++ provides the try and catch blocks. The try block contains the code that might throw an exception, and the catch block handles the exception.

	A catch block can catch an exception of a specific type or a base class of the type. If a catch block catches an exception, it can handle the exception, rethrow the exception, or throw a different exception.

	In C++, the standard library provides several exception types that can be thrown, such as std::bad_alloc, std::runtime_error, and std::out_of_range. Additionally, users can define their own exception types by deriving from the std::exception class.

## Exercise 00 - Mommy, when I grow up, I want to be a bureaucrat!

Exercise 00 is a simple programming exercise that involves creating a Bureaucrat class. The Bureaucrat is a person who attends to documentation according to their grade level.

The Bureaucrat class has a constant string name and a grade that should be within the range of 1 (highest) to 150 (lowest).

There are two methods in the Bureaucrat class:

1. incrementGrade(): This method increases the bureaucrat's grade.
2. decrementGrade(): This method decreases the bureaucrat's grade.

Both methods throw an exception if the grade level goes out of bounds. This ensures that the grade level always stays within the valid range.

Additionally, there are two subclasses that inherit from std::exception. These subclasses return custom messages to provide more context for the exceptions that are thrown.

Overall, this exercise aims to teach programming concepts such as class inheritance, exception handling, and object-oriented design.


## Exercise 01 - Form up, maggots!

Now that we have our Bureaucrat class, let's create a new class called Form in Exercise 01. This class will allow our Bureaucrat to do some work during their day job.

The Form class has four private attributes:

1. A constant string name to represent the name of the form.
2. A boolean signedForm to indicate whether the form has been signed or not. This attribute is set to false by default in the constructor.
3. A constant integer gradeToExec, which is the minimum grade level required for the Bureaucrat to execute the form.
4. A constant integer gradeToSign, which is the minimum grade level required for the Bureaucrat to sign the form.

The Form class also has a public method called beSigned(), which changes the status of the signedForm attribute to true if the form is signed. If the form is not signed, an exception is thrown.

Finally, the Bureaucrat class has a new method called signForm(). This method uses a try-catch block to attempt to sign the form using the beSigned() method of the Form class. If the signing is successful, a message is printed. If not, the catch block will print the reason why the form cannot be signed.

It is important to note that the grade required to sign or execute a form has the same values as the Bureaucrat's grade.

This exercise is designed to help you practice using try-catch blocks and to learn how to handle exceptions in your code. By implementing the signForm() method, you will also gain a better understanding of how classes can interact with each other and how to use object methods to perform specific tasks.


## Exercise 02 - No, you need form 28B, not 28C...



## Exercise 03 - Interface & recap

### Interfaces
	In object-oriented programming, an interface is a collection of method signatures (i.e., method names, return types, and arguments) that a class can implement. An interface defines a contract between the interface and the implementing class, specifying the behavior that the implementing class must provide.

	Interfaces allow for polymorphism, which is the ability of different objects to be treated as if they have the same type, as long as they implement the same interface. This allows for greater flexibility and reusability in code, as different objects can be used interchangeably as long as they implement the same interface.

	In Java, interfaces are declared using the "interface" keyword, and methods in the interface are by default abstract and public. Classes can then implement an interface using the "implements" keyword, and must provide implementations for all of the methods declared in the interface.

	Interfaces are often used to define contracts for common behaviors or operations that can be shared across multiple classes. For example, the Java Collections Framework defines a number of interfaces such as List, Set, and Map, which define common methods and behaviors for collections of data.

Since we are currently working with C++98, interfaces are not natively supported. However, we can still create our own interfaces to better understand their functionality and potential usefulness in our code.

In this exercise, we will create RPG characters with different classes such as Ice, Heal, and MateriaSource. We will also be working with an abstract class called Materia and interfaces called ICharacter and IMateriaSource.

The Ice and Heal classes inherit from the AMateria class and both have their own 'clone' methods that return new Ice or Heal Materia objects. These Materia objects can be used to target the ICharacter interface


The Character class inherits from the ICharacter interface and contains a string name as well as two arrays - one with a size of 4 to store materias, and another with a size of 50 to hold dropped materias.

The class includes three methods:

1. equip(): This method equips new materias. If the inventory is full, the method does not store the new materia and returns no message.

2. unequip(): This method is used to unequip a stored materia. Since we cannot delete the materia, it is instead stored in the dropped materia array.

3. use(): This method uses a materia and requires the slot index and an ICharacter target to be passed as arguments.


The MateriaSource class inherits from IMateriaSource and contains a size 4 array of Materia called materiaSlot. This class includes two methods:

1. learnMateria(): This method receives an AMateria object to store in the array. If the array is full, the method does not add the new AMateria object and does not return any message. This method provides a template to create new Materia objects as needed.

2. createMateria(): This method receives a string and checks if the string matches one of the values in materiaSlots. Them it returns a materia Ice or Cure. If the string does not match any values, nothing happens.

There are several tests in the main function to verify the following functionalities:

1. Deep copy: This tests whether copying one object into another creates a deep copy of the original object or not.

2. Polymorphic object creation: This tests whether creating Materia objects using polymorphism works correctly.

3. Materia usage in Character: This tests whether Materia can be included in a Character object and used correctly.

4. Materia usage in Enemy classes: This tests whether Materia can be used in Enemy classes and whether it functions correctly.

Although this exercise is lengthy, it is very helpful in understanding various topics covered in the module.

![terminal.eg](images/cpp04_ex00.png)