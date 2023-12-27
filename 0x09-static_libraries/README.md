# 0x04-more_functions_nested_loops

 A library is a file containing several object files, that can be used as a single entity in a linking phase of a program.

 there is two kind of librarys in c the first is static library and the other is shared library or daynamic library

 this project all about creating a static library
 so the shared library will be in another project later

 # Creating A Static "C" Library Using "ar" and "ranlib"

 ar (archiver') This program can be used to create static libraries (which are actually archive files) #usege:
    ar rcs libexample.a file1.o file2.o
 If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library.

 After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation (this will be better understood when we take a deeper look at the link process at the end of this tutorial). The command used to create or update the index is called 'ranlib', and is invoked as follows:

usege: ranlib libutil.a

On some systems, the archiver (which is not always ar) already takes care of the index, so ranlib is not needed (for example, when Sun's C compiler creates an archive, it is already indexed). However, because 'ar' and 'ranlib' are used by many makefiles for many packages, such platforms tend to supply a ranlib command that does nothing. This helps using the same makefile on both types of platforms.

# Using A "C" Library In A Program

After we created our archive, we want to use it in a program. This is done by adding the library's name to the list of object file names given to the linker, using a special flag, normally '-l'. Here is an example:

    gcc -o myprogram myprogram.c -L/path/to/library -lexample


