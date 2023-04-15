-<p align="center">
  <img src="images/grade.png" alt="grade " />
</p>

# Module 09

Module 09 is divided in three exercises.

## About

This is the final module of the CPP Piscine where we use containers from the Standard Template Library (STL) in C++. In each exercise, it is mandatory to use a different container, and you cannot repeat a container in other exercises.


## Exercise 00 - Bitcoin Exchange

For the first exercise, we have a `data.csv` file containing the date and Bitcoin value during a specific period. The program receives a file as an argument from the terminal, which includes the date and value to be converted to the Bitcoin value.

To obtain the value from `data.csv`, the program uses a map container since there is no library available in CPP98 to manipulate dates. The map is constructed with string and float as key-value pairs.

### Map container

	Maps are typically implemented as a binary search tree, which allows for fast search, insertion, and deletion of elements. Maps are useful when you need to store a set of values that can be efficiently accessed and searched based on a unique key.

	Maps provide several member functions, such as insert(), find(), and erase(), that allow you to add, search for, and remove elements from the container. Maps also provide a range of iterators that enable you to traverse the container and access its elements.

	In addition to the standard map, C++ also provides several other container classes based on the same concept, including multimap, unordered_map, and unordered_multimap. Each of these containers has slightly different properties and performance characteristics, so it's important to choose the right one for your specific use case.

To process the file received from the terminal, the program reads the file and parses each line to search for the corresponding entry in the map. If a match is found, the program returns the converted value along with the associated information.

If the data format in the file is invalid, the program displays an error message to inform the user of the issue. By parsing each line and searching for the corresponding entry in the map, the program can efficiently process large amounts of data and provide accurate results for each entry.

## Exercise 01 - Reverse Polish Notation

### Reverse Polish Notation

	Reverse Polish Notation (RPN), also known as postfix notation, is a mathematical notation in which operators are placed after their operands. For example, instead of writing 2 + 3, we would write 2 3 + in RPN.

	To evaluate an expression in RPN, we start with an empty stack and scan the expression from left to right. When we encounter a number, we push it onto the stack. When we encounter an operator, we pop the top two values from the stack, apply the operator to them, and push the result back onto the stack.

	For example, to evaluate the RPN expression 2 3 + 4 *, we start with an empty stack and scan the expression from left to right:

		1. Push 2 onto the stack.
	    2. Push 3 onto the stack.
	    3. Pop 3 and then 2 from the stack, add them, and push the result (5) back onto the stack.
	    4. Push 4 onto the stack.
	    5. Pop 4 and then 5 from the stack, multiply them, and push the result (20) back onto the stack.

	The final value on the stack (20) is the result of the expression.

	RPN is often used in computer programs and calculators because it can be evaluated using a simple stack-based algorithm.

The program receives positive numbers as arguments with values ranging from 0 to 9, along with mathematical operators to convert to RPN.

To convert the expression to RPN, the program uses a stack container to hold the numbers and perform operations when necessary. The algorithm scans the expression from left to right and pushes each number onto the stack. When an operator is encountered, the program pops the top two values from the stack, applies the operator to them, and pushes the result back onto the stack.

For example, to convert the expression ```2 + 3 * 4 - 5``` to RPN, the program would first push `2` onto the stack. When it encounters the `+` operator, it pops `2` and pushes it onto the output queue. It then pushes `3` onto the stack. When it encounters the `*` operator, it pops `3` and `2` and pushes `3 * 2` (`6`) back onto the stack. It then pushes `4` onto the stack. When it encounters the `-` operator, it pops `4` and `6` and pushes `4 - 6` (`-2`) back onto the stack. Finally, it pushes `5` onto the stack and pops the remaining value (`-2`) and pushes it onto the output queue.

The resulting RPN expression is `2 3 4 * + 5 -`, which can be evaluated using a stack-based algorithm similar to the one used to convert the expression to RPN.


## Exercise 02 - PmergeMe

The third exercise the program receives positive numbers as argument from terminal and it sorts these numbers using merge-insert sort algorithm.

### Merge-insert

	Merge-insert is a common algorithm used for merging two sorted arrays into a single sorted array.

	The basic idea behind merge-insert is to start with an empty array and insert the smallest element from the two input arrays into the output array. The algorithm continues to compare the smallest unprocessed element from each input array and insert the smallest of the two into the output array until all elements have been processed.

	This algorithm has a time complexity of O(n), where n is the total number of elements in the input arrays. Merge-insert is a stable algorithm, meaning that it maintains the relative order of equal elements from the input arrays.

the program receive the values from terminal, check if it's positive numbers and store in a list and deque containers. 

So it use the merge-sort algorithm and calculate the time for the sort os list and deeq and show it in theterminal. 
