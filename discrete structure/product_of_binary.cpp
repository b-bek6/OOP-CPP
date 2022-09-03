/*
 * C Program to Find Multiplication of two Binary Numbers
 */
#include <stdio.h>
 
int binaryproduct(int, int);
 
int main()
{
 
    long binary1, binary2, multiply = 0;
    int digit, factor = 1;
 
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    while (binary2 != 0)
    {
        digit =  binary2 % 10;
        if (digit == 1)
        {
            binary1 = binary1 * factor;
            multiply = binaryproduct(binary1, multiply);
        }
        else
            binary1 = binary1 * factor;
        binary2 = binary2 / 10;
        factor = 10;
    }
    printf("Product of two binary numbers: %ld", multiply);
    return 0;
}
 
int binaryproduct(int binary1, int binary2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;
 
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}



/*explaination
1. Take two binary numbers as input and store it in the variables binary1 and binary2. Initialize the variables multiply and factor with 0 and 1 respectively.
2. Divide the variable binary2 by 10 and obtain its remainder. Store this remainder in the variable digit.
3. Check if the digit is equal to 1 or 0. If it is 1, then multiply binary 1 with factor and override binary1 with this value. Call function binaryproduct() by passing binary1 and multiply as parameters.
4. If it is 0, then multiply binary 1 with factor and override binary1 with this value and override binary2 with its quotient got when it is divided by 10.
5. Do steps 2-4 until binary2 becomes zero.
6. In the function binaryproduct(), obtain the remainder and quotient of both the parameters.
7. Firstly add the remainders of both parameters and further add the variable remainder.
8. Obtain the remainder and quotient of the result got at step 7 when divided by 2. Store the remainder in the array sum[] and override the variable remainder with the quotient.
9. Override the variables binary1 and binary2 with their quotient got at step 6.
10. Repeat the steps 6-9 with the new values of binary1 and binary2 until both becomes zero.
11. When it becomes zero check if any remainder exits. If it is, then copy it into the array sum.
12. Multiply the variable binaryprod with 10 and add the result to array sum. Override the variable binaryprod with the got result. Do this step for all array elements and return binaryprod.
13. Print the output and exit.

*/