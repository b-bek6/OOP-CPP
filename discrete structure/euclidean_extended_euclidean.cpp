/* Program to implement Euclidean and extended Euclidean algorithm */

#include<stdio.h>

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b%a ,a);
}

int main(){
    int a = 10, b = 15, c;
    c = gcd(a,b);
    printf("The GCD of %d and %d = %d\n",a,b,c);
    a = 35, b = 10;
    c = gcd(a,b);
    printf("The GCD of %d and %d = %d\n",a,b,c);
    a = 31, b = 2;
    c = gcd(a,b);
    printf("The GCD of %d and %d = %d\n",a,b,c);
    return 0;

}
