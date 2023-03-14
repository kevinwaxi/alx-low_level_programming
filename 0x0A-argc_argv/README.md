# 0x0A. C - argc, argv
## Task  0. It ain't what they call you, it's what you answer to 
Write a program that prints its name, followed by a new line.
  *  If you rename the program, it will print the new name, without having to compile it again
  *  You should not remove the path before the name of the program
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```


Repo:

   * GitHub repository: alx-low_level_programming
   * Directory: 0x0A-argc_argv
   * File: 0-whatsmyname.c

## Task 1. Silence is argument carried out by other means 
Write a program that prints the number of arguments passed into it.
   * Your program should print a number, followed by a new line
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
```


Repo:

   * GitHub repository: alx-low_level_programming
   * Directory: 0x0A-argc_argv
   * File: 1-args.c

##  3. Neither irony nor sarcasm is argument 
Write a program that multiplies two numbers.
   * Your program should print the result of the multiplication, followed by a new line
   * You can assume that the two numbers and result of the multiplication can be stored in an integer
   * If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
```
Repo:

   * GitHub repository: alx-low_level_programming
   * Directory: 0x0A-argc_argv
   * File: 3-mul.c


