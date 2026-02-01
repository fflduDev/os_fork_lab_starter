# Fork & Sequence Calculator

## Description
Write a C program which forks the parent & has the child implement in C the following sequence:

This sequence is defined below:
* The sequence begins with any positive integer, say n
* If the integer n is odd, the next number in sequence would be 3n+1
* If the integer n is even, the next number in sequence would be n/2
* The sequence will continue until digit 1 is encountered

## Example
```
For example:
Input: n = 8
Output: 8, 4, 2, 1
```

## Requirements
- Parent process forks a child process
- Child process computes and prints the sequence
- Parent waits for child to complete

## Compilation
```bash
gcc -o program program.c
```

## Usage
```bash
./program <positive_integer>
```

## Implementation
- Use `fork()` to create child process
- Child implements the sequence algorithm
- Parent uses `wait()` for child completion

## Sample Output

<img width="275" height="294" alt="image" src="https://github.com/user-attachments/assets/fc86feca-f72f-43ab-b257-d293f6dd3b5c" />

