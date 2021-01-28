#ifndef MYLIBRARY_H_INCLUDED
#define MYLIBRARY_H_INCLUDED

/*
The header files just hold the variable, struct, class, and method declarations.
*/
int a = 10; // really you should not define variables in header files, but in the corresponding cpp file.
extern int b; // external variable that we do not reserve memory for variable b and is defined somewhere else.
void showHelp();

#endif