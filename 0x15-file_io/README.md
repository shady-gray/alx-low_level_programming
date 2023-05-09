# PROJECT: 0x15. C - File I/O
### AUTHOR: *Basil Bassey*

*In partial fulfillment to course requirements of the ALX Software Engineering Program, `alx-low_level_programming`.*


## Resources
**Read  or watch**:
- [File descriptors](https://intranet.alxswe.com/rltoken/Duva-9Fjyskt39R__Nnazg)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://intranet.alxswe.com/rltoken/x05veqiLPSxXmJf9zTtCkQ)

**man or help**:
- `open`
- `close`
- `read`
- `write`
- `dprintf`
## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/kQg2-u-cAYxh6oJz2TWHWw), **without the help of Google**:

## General
- Look for the right source of information online.
- How to create, open, close, read and write files
- What are file descriptors.
- What are the 3 standard file descriptors, what are their purpose and what are their `POSIX` names.
- How to use the I/O system calls `open`, `close`, `read` and `write`.
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- What are file permissions, and how to set them when creating a file with the `open` system call.
- What is a system call.
- What is the difference between a function and a system call.

## Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`.
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using [betty-style.p](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.
- All your header files should be include guarded.
- Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`

## Task lists
- `0-read_textfile.c` - ***Tread lightly, she is near*** : Write a function that reads a text file and prints it to the POSIX standard output.<hr>
- `1-create_file.c` - ***Under the snow*** : Create a function that creates a file.<hr>
- `2-append_text_to_file.c` - ***Speak gently, she can hear*** : Write a function that appends text at the end of a file.<hr>
- `3-cp.c` - ***cp*** : Write a program that copies the content of a file to another file.<hr>
- `100-elf_header.c` - ***elf*** : Write a program that displays the information contained in the ELF header at the start of an ELF file.

