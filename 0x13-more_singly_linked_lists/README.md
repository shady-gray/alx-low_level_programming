# PROJECT: 0x13. C - More singly linked lists
### AUTHOR: *Basil Bassey*

*In partial fulfillment to course requirements of the ALX Software Engineering Program, `alx-low_level_programming`.*

## Resources
**Read or watch:**

- [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)
- [Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/Uip4OgfLQdGP921TAMtCHQ), **without the help of Google**:

### General
- How to use Linked List.
- Start to look for the right source of information without too much help.

## Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
### General
- Allowed editors: `vi` , `vim` , `emacs`.
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` , using the options -`Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project is mandatory.
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc` , `free` and `exit` . Any use of functions like
`printf` , `puts` , `calloc` , `realloc` etc… is forbidden.
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
- You don’t have to push `_putchar.c` , we will use our file. If you do it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your
functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included
in your header file called `lists.h`
- Don’t forget to push your header file.
- All your header files should be include guarded.

## More Info
Please use this data structure for this project:
> /**
> 
> \* struct list_s - singly linked list
> 
> \* @str: string - (malloc'ed string)
> 
> \* @len: length of the string
>
> \* @next: points to the next node
> \*
> \* Description: singly linked list node structure
>
> \*/
>
> typedef struct list_s
> 
> {
>  
> char *str;
> 
>  unsigned int len;
> 
>  struct list_s *next;
> 
> } list_t;

## Task List
- `0-print_listint.c` - ***Print List*** : Write a function that prints all the elements of a list_t list.<hr>
- `1-listint_len.c` - ***List Length*** : Write a function that returns the number of elements in a linked list_t list.<hr>
- `2-add_nodeint.c` - ***Add node*** : Write a function that adds a new node at the beginning of a list_t list.<hr>
- `3-add_nodeint_end.c` - ***Add node at the end*** : Write a function that adds a new node at the end of a list_t list.<hr>
- `4-free_listint.c` - ***Free list*** : Write a function that frees a list_t list.<hr>
- `5-free_listint2.c` - ***Free*** : Write a function that frees a listint_t list.<hr>
- `6-pop_listint.c` - ***Pop*** : Write a 64-bit program in assembly that prints Hello, Holberton , followed by a new line.<hr>
- `7-get_nodeint.c` - ***Get node at index*** : Write a function that returns the nth node of a listint_t linked list.<hr>
- `8-sum_listint.c` - ***Sum List*** : Write a function that returns the sum of all the data (n) of a listint_t linked list.<hr>
- `9-insert_nodeint.c` - ***Insert*** : Writ a function that inserts a new node at a given position.<hr>
- `10-delete_nodeint.c` - ***Delete at index*** : Write a function that deletes the node at index index of a listint_t linked list.<hr>
- `100-reverse_listint.c` - ***Reverse List*** : Write a function that reverses a listint_t linked list.<hr>
- `101-print_listint_safe.c` - ***Print (safe version)*** - Write a function that prints a listint_t linked list.<hr>
- `102-free_listint_safe.c` - ***Free (safe Version)*** : Write a function that frees a listint_t list.<hr>
- `103-find_loop.c` - ***Find a loop*** : Write a function that finds the loop in a linked list.

