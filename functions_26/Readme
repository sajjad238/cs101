Simple Function execution:

* When OS call a process, it allocate memory for that process. This memory consist of 
	* Data segment
	* Code segment
	* Stack segment

* Data segment is used for dynamically allocated data, variables and stuff

* Code segment contain executable instructions in program

* Stack segment is used for keeping info of jumps, book keeping of Program Counter (PC) etc
	* Stack keep the record of jumps heraricy in a LIFO manner.


-----------------------------------------------------

Function call by value & call by reference

* Function call by value:
	* Values passed to callee are copied values not the original value, so any operation on them will effect the values of caller function.
	* Safe way to connect blocks (functions)
	* Take a lot more memory for keeping all the record in nested call (Function1 -> Function2 -> Function3)
	* It should return something, other it is useless. All the operation performed and information inside the callee function will be lost, when it returns

* Function call by reference:
	* Original values are passed to the callee function (function which is called by other function)
	* Should be handle with great care, one wrong logic will affect the caller function too
	* Take less memory, it just create local pointer to store addresses, and write back all the process info on that memory address
	* It may or may not return
