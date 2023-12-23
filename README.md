# ceng101-22-23-HW1
Ceng 101, Algorithms and Programming 1, 2022-2023 Fall, Homework 1

## Part 1 (creditapplication.c)
### Problem
A national bank wants to use a program to decide whether customers are eligible for a credit application. Write a C program to be used for this purpose.
### Rules

If age is smaller than 18 (i.e. $age < 18$), reject the credit application.

If age is greater than or equal to 18, and smaller than 30 (i.e.  $30 > age \geq 18$), then approve the application only if the salary of the customer is greater than or equal to 3 times of the credit (i.e.  $salary \geq 3 \times credit$).

If age is greater than or equal to 30 (i.e. $age \geq 30$), then approve the application only if the salary of the customer is greater than or equal to 2 times of the credit (i.e. $salary \geq 2 \times credit$). 

### How should your program work?
Ask user to enter age, salary, and credit values. Note that the order of inputs is important. 

Assume that only positive integer numbers will be entered.

***Print ‘approved’ if the credit is to be approved, print ‘rejected’ if the credit is not to be approved. Please do not add any additional text to your output.***

### Example usage 1

```
Enter age: 35

Enter salary: 30000

Enter credit: 12000

approved
```

### Example usage 2

```
Enter age: 20

Enter salary: 30000

Enter credit: 12000

rejected
```
## Part 2 (calculateformula.c)
### Problem
Write a program to calculate the following formula.

$y=\(a^b\)^2-2c$

DON'T use <math.h> for the exponentiation operation! Instead, you can use while loop for the calculation.

### How should your program work?
Ask user to enter a, b, c in order. Note that the order of inputs is important. 

Assume that a, b, c are integer numbers; $b \geq 0$; a and b cannot be 0 at the same time.

### Example usage 1

```
Enter a: 2

Enter b: 3

Enter c: 2

y: 60
```

### Example usage 2

```
Enter a: 2

Enter b: 0

Enter c: 2

y: -3
```

Mind the space after : in your output!# hw1
