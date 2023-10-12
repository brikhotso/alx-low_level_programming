What Are Variadic Functions?
A variadic function is a function that can accept a variable number of arguments. This means that you can call the function with different numbers of arguments, and the function can work with all of them. Variadic functions are particularly useful when you need a flexible function to perform a task, and you don't know in advance how many arguments will be passed.

Accessing Variadic Arguments
To access variadic arguments, you use special functions provided by the language. In C, you can use the <stdarg.h> library to work with variadic arguments.

Primary functions used in variadic functions

va_list: This is a type defined in the <stdarg.h> library to declare a list of arguments. It's like a container to hold the variadic arguments.

va_start: This function initializes the va_list object to point to the first variadic argument. You pass in the va_list and the last named argument before the ellipsis.

va_arg: This function retrieves the next argument from the va_list and specifies its type. You need to pass in the va_list and the type you expect as an argument.

TASKS

0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function

2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function

3. To be is a to be the value of a variable

Write a function that prints anything.

Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
see example
You are not allowed to use for, goto, ternary operator, else, do ... while
You can use a maximum of
2 while loops
2 if
You can declare a maximum of 9 variables
You are allowed to use printf
Print a new line at the end of your function