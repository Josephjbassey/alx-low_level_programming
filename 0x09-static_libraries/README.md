# 0x09. C - Static libraries

This project is all about static libraries in C. It covers the creation and usage of static libraries, as well as various C functions. Below, you'll find a summary of what you'll learn and the tasks involved:

## Concepts

For this project, we expect you to look at this concept:
- C static libraries

## Resources

Read or watch:
- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is the difference between Dynamic and Static library (Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=eW5he5uFBNM)

Man or help:
- ar
- ranlib
- nm

## Learning Objectives

By the end of this project, you will be able to:
- Understand what a static library is, how it works, how to create one, and how to use it.
- Have basic knowledge of `ar`, `ranlib`, and `nm` commands.

## Requirements

### C
- Allowed editors: vi, vim, emacs
- Compilation will be done on Ubuntu 20.04 LTS using gcc, with specific flags.
- All files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- Code should follow the Betty style guidelines.
- No global variables are allowed.
- Each source file should contain no more than 5 functions.
- Prototypes of all functions and the `_putchar` function should be included in the header file `main.h`.
- You don't need to push `_putchar.c`; it will be provided.
- The prototypes should be pushed to your repository.
- You are allowed to use `_putchar`.
- You are not allowed to use the standard library functions like `printf`, `puts`, etc.

### Bash
- Allowed editors: vi, vim, emacs
- All scripts will be tested on Ubuntu 20.04 LTS.
- All files should end with a new line.
- The first line of all files should be exactly `#!/bin/bash`.
- A README.md file, at the root of the project folder, should describe what each script is doing.
- All files must be executable.

## Tasks

### Task 0: A library is not a luxury but one of the necessities of life
- Create the static library `libmy.a` containing several functions (see the full list in the task description).
- [Task 0 file](./libmy.a)

### Task 1: Without libraries what have we? We have no past and no future
- Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the .c files in the current directory.
- [Task 1 file](./create_static_lib.sh)

Happy coding!

> "Without libraries, what have we? We have no past and no future." - Ray Bradbury

