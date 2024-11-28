
// All Program of Tamim Mahmud -ID: 1104--------------------------------------------------------> 7 Programs

// string
//  1. Print string: 
#include <stdio.h>
int main()
{
    char name[] = {"Sheikh Tamim Mahmud"};
    printf("%s", name);
    return 0;
}

// 2. Find the Length of a String
#include <stdio.h>
#include <string.h> // For strlen

int main()
{
    char str[] = "Programming in C";

    // Using strlen function
    int length = strlen(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}

// 3. Access and Print Elements of an Array

#include <stdio.h>
int main()
{
    int numbers[] = {15, 25, 75, 44};
    numbers[3] = 22;
    printf("%d", numbers[3]);
    return 0;
}

// array
// 4. Calculate the Sum of Elements in an Array
#include <stdio.h>
int main()
{
    int arr[4] = {5, 10, 15, 20};
    // Calculating sum manually
    int sum = arr[0] + arr[1] + arr[2] + arr[3];
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}

// 5. Reverse the Elements of an Array

#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int reversed[4];
    // Reversing manually
    reversed[0] = arr[3];
    reversed[1] = arr[2];
    reversed[2] = arr[1];
    reversed[3] = arr[0];
    printf("Reversed array:\n");
    printf("%d %d %d %d\n", reversed[0], reversed[1],
           reversed[2], reversed[3]);
    return 0;
}

// switch
//  6. Day of the Week C Program

#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}

// 7. Grade Point Calculation C Program

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    // Check if marks are within the valid range
    if (marks < 0 || marks > 100)
    {

        printf("Invalid marks! Please enter a number between 0 and 100.\n");

        return 1;
    }
    switch (marks / 10)
    {
    case 10: // 100 falls here
    case 9:
    case 8:
        printf("Grade: A+\n");
        break;
    case 7:
        printf("Grade: A\n");
        break;
    case 6:
        printf("Grade: A-\n");
        break;
    case 5:
        printf("Grade: B\n");
        break;
    case 4:
        printf("Grade: C\n");
        break;
    case 3:
        if (marks >= 33 && marks <= 39)
            printf("Grade: D\n");
        else
            printf("Grade: F\n");
        break;
    case 2: // Covers scores < 33
    case 1:
    case 0:
        printf("Grade: F\n");
        break;
    }
    return 0;
}

// All Program of Mowmita ID- 1116----------------------------------------------------------------> 4 Programs

// 1. Find Roots of a Quadratic Equation Using If else statement

#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, d, root1, root2;
    printf("Enter the value of a, b and c: ");
    scanf("%lf %lf %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.3f and root2 = %.3f", root1, root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.3f;", root1);
    }
    else
    {
        printf("Roots are imaginar\n");
    }
    return 0;
}



// 2. Find the largest number aong the three number Using If else statement:

#include <stdio.h>

int main()
{
    int a, b, c;

    // Prompt the user to enter three numbers
    printf("Enter the value of three numbers: ");
    scanf("%d %d %d", &a, &b, &c); // Removed space in %d

    // Find the largest number using relational operators
    if (a >= b)
    {
        if (a >= c)
            printf("%d is the largest number.\n", a); // Added newline
        else
            printf("%d is the largest number.\n", c); // Added newline
    }
    else
    {
        if (b >= c)
            printf("%d is the largest number.\n", b); // Added newline
        else
            printf("%d is the largest number.\n", c); // Added newline
    }

    return 0;
}


// 3. *Find 1^2+2^2+3^2+……………………+100^2=? C program
#include <stdio.h>
int main()
{
int i,sum=0;
for(i=1;i<=100;i++)
 sum=sum=i*i;
printf("The summation is:=%d",sum);

return 0;
}

// 4. C Program to Display Fibonacci Sequence

#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1, i, n;
    int nextTerm;

    // Prompt for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms
    printf("Fibonacci Series: %d, %d", t1, t2);

    // Generate and print the rest of the series
    for (i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm); // Add a comma before subsequent terms
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n"); // Add newline for better readability
    return 0;
}



// Program of Sourav -ID-1084 ------------------------------------------------------------------> 5 Programs

// 1. Print the first 5 even numbers
#include <stdio.h>
int main()
{
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}

//  2. Creating Patterns Using Nested Loops

#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 3. Sum of Numbers from 1 to 10

#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 10)
    {
        sum += i; // Add current value of i to sum
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}

// 4. Using Base and Height in triangle Formula: Area= 0.5 × Base × Height

#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}

// 5. C program to calculate the factorial of a given number

#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
    return 0;
}