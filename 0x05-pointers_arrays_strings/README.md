# Resources

### Read or watch:

   * [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
   * [C - Pointers](https://intranet.alxswe.com/rltoken/oyHybzYBeFiLUMALpb_usA)
   * [C - Strings](https://intranet.alxswe.com/rltoken/sUeh9qDyW9pePOfJIpx_Bw)
   * [Memory Layout](https://intranet.alxswe.com/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ)

# Learning Objectives
## General

   * What are pointers and how to use them
   * What are arrays and how to use them
   * What are the differences between pointers and arrays
   * How to use strings and how to manipulate them
   * Scope of variables

## More Info
You do not need to learn about pointers to functions, `pointers to pointers`, `multidimensional arrays`, `arrays of structures`, `malloc` and `free` - yet.

<details>
    <summary>Task 0. 98 Battery st. </summary>
<p>
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

   * Prototype: `void reset_to_98(int *n);`
</p>
  
```bash
  
julien@ubuntu:~/0x05$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 
```
</details>


