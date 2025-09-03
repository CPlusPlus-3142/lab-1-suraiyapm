[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/LsH64ZWh)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=20280569)
In this lab you will use some imperative C++ and get practice compiling, running, and submitting a program.
=====================================================================

Write two functions in C++:

1. isPrime(x) that returns a boolean value representing whether x is prime

2. closestPrime(x) that returns x if x is prime, otherwise, it returns the closest prime number to x that is larger than x

in main:
Declare two integer variables and read values from the user.
check whether the values are prime and print a message to the screen indicating the result.

For a non-prime number, print the closest prime

Example output:
Enter two numbers: 12 17
12 is not prime. Closest prime is 13.
17 is prime.

=====================================================================


 If you want to run my included unit tests from the command line, you can type at the shell prompt:
 make test
 
 This command will compile both the files app.cpp and test.cpp and then run the executable a.out

If you want to recompile afresh, then you type:
rm ./a.out
to remove the a.out and then make test again.