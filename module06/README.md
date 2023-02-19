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
