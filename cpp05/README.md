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

Now is the time to create three forms for the Bureaucrat to sign.

Firstly, the Form class is now abstract and is called AForm. Additionally, a new virtual method called ```execute()``` has been added. This method checks if the form can be signed, allowing child classes to execute their methods. If the form cannot be signed, an exception is thrown.

There are three child classes that inherit from AForm and have a string called ```target```. Additionally, their constructor receives the ```target``` parameter when requested.


The first child class is called ShrubberyCreationForm. To sign this form, the grade must be above 146, and to execute it, the grade must be above 138. If the form is signed, the execute() method will create a file with the name "```target```_shrubbery" in the working directory and write an ASCII Christmas tree inside it.

The second child class is called RobotomyRequestForm. To sign this form, the grade must be above 73, and to execute it, the grade must be above 46. If the form is signed, the execute() method will attempt to robotomize the ```target```. There is a 50% chance of success, so a success or failure message will be displayed accordingly.

The third and last class is called PresidentialPardonForm. To sign this form, the grade must be above 26, and to execute it, the grade must be above 6. If the form is signed, the execute() method will display the message "The ```target``` has been pardoned by Zaphod Beeblebrox".

Finally, the Bureaucrat class now has the ```executeForm()``` method, where the bureaucrat attempts to sign the form. This method displays a message on the terminal indicating whether the form has been signed and executed successfully.

There are tests in the main function to demonstrate the attempt to sign and execute each form.


## Exercise 03 - At least this beats coffee-making

Now that we have many forms to sign, the bureaucrat is complaining about having to create them. As a result, the company hired an intern who can create these forms, and the bureaucrat can work with them if there's something wrong.

So now we have a new class called "Intern". This class has only one method, called makeForm(). It receives two parameters: the form name and the target. The method has an array of AForm with all the possible forms, including ShrubberyCreationForm.hpp, RobotomyRequestForm.hpp, and PresidentialPardonForm.hpp.

The method will compare the value of the formName and create a new form if the name is valid. Otherwise, it will throw an exception. There is also a subclass responsible for the Intern exception.

All the other classes work as before, and there are many tests in the main method.
