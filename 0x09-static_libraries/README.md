LIBARARY
is a file containing several object files, than can be used as a single entity in a linking phase of a program.

STATIC LIBRARIES
collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.

STEPS FOR CREATING A STATIC LIBRARY

>Create a C file containing functions you want in in the library
>Create a header file with all the prototypes of the functions
>Compile the library with gcc -c command( create an object file with a .o extention)
>Archive the library using the ar -rcs command
>Index the library with ranlib command
>check the content of the library with the nm  or ar -t command

USING STATIC LIBRARY

> Create a C file with the main function
> Compile the C file with gc -c command
> Link the compiled file to the static library (gcc -o file file .o -L. -lmylib)
> Run the file (./file)

TASKS

0. A library is not a luxury but one of the necessities of life

> Create the static library libmy.a.

1. Without libraries what have we? We have no past and no future

> Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
