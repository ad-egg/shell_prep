# shell_prep

These are some exercises to prepare for writing a simple UNIX command interpreter

all files are compiled with this command:
```
gcc -Wall -Wextra -Werror -pedantic code.c -o executable_file
```

## 0-getppid.c
This program prints the PID of the parent process.
# 1-max_process_id
This bash shell script prints the maximum value a process ID can be.
## 0-av.c
This program prints all the arguments without using `a`.
## 1-read_line.c
This program prints `"$ "`, waits for the user to enter a command, and then prints it on the next line.
## 2-command_line_to_av.c
This function splits a string and returns an array of each word to the string.

