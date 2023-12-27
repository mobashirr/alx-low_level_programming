# 0x10-variadic_functions

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier


# What are variadic functions
variadic function is function that can takes unfixed amout of parameters
such like printf function (int printf (const char *string, ...))

we know that in c we need to specfi the type of the parameter in the prototype before we can use it and we also to need to declare it in the prototype but what if we want to make more dynamic function and we want to create variadic function what shuold we do ?

first we need to declare it as variadic functiom in this way:
    int printf (const char *string, ...)
1- write normal prototype and you need to declare the fisrt parameter
2- then you type ... in the second parameter

this way we declared a variadic function

# access the parametrs
now to access the parameters of variadic function there is some macros used for that
which are: va_list, va_start, va_arg, va_end

va_list is a type used to declare a variable that will hold the information needed by the other three functions to access the variable arguments.
va_start

va_start initializes the va_list variable. It must be called once, at the beginning of the function that uses variable arguments.

va_arg: retrieves the next argument from the variable argument list. It takes two parameters: the va_list variable and the type of the next argument.
va_end

va_end performs cleanup after variable arguments have been processed. It must be called before the function exits.


/*
int variadic_func(int num_args, ...)
 {
    int sum = 0;

    // Declare a va_list variable
    va_list args;

    // Initialize the va_list variable with va_start
    va_start(args, num_args);

    // Access the variable arguments with va_arg
    for (int i = 0; i < num_args; i++)
    {
        // each time we use this macro we get the next parameter
        sum += va_arg(args, int);
    }

    // Cleanup with va_end
    va_end(args);

    return sum;
}
*/

# using const type qualifier:

The const type qualifier in C is used to declare variables whose values should not be modified after initialization.

Why Use const:
Readability and Intent:

It makes your code more self-documenting. When a variable is declared as const, it signals to other developers that the value should not be changed.
Preventing Accidental Modifications:

Using const helps prevent unintentional modifications to variables. If you attempt to modify a const-qualified variable, the compiler will generate an error.
Optimizations:

The const qualifier allows the compiler to perform certain optimizations, knowing that the value of the variable won't change during its scope.
