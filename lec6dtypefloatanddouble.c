#include <stdio.h>

/*
Float, double or long double is used to represent faction or decimal numbers
#Fixed Point Representation:#
 Sign Integer . Fraction  e.g. -9.99
#Float point Representation#
Sign (sign of exponent and exponent value {2 things constitues Exponents}) Mantissa
Formula for Float point : (0.Mantissa)*Base^exponent (a sign and a number)
e.g. -(0.999) * 10^+1 = -9.99
1. Float will represent upto 7 digits precisely including the integer part
2. double will represent upto 16 digits
3. long double will represent 19 digits
*/


int main()
{
    float floatType;
    double doubleType;
    long double longdoubleType;
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("Size of long double: %d bytes\n", sizeof(longdoubleType));
    printf("--------------------------------------------\n");
    
    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.1415926535897932123456789;
    printf("Var1 = %0.16f\n", var1);
    printf("Var2 = %0.16lf\n", var2);
    printf("Var3 = %0.21Lf\n", var3);
    printf("--------------------------------------------\n");
    int var4 = 4/9;
    float var5 = 4/9; 
    float var6 = 4.0f/9.0f; // Placing .0 at the end makes them doulbe values by default to make them float we have to f at the end of the numbers
    printf("Var4 = %d\n", var4); // because integer it will only show show the integer part and truncate fractional part
    printf("Var5 = %0.2f\n", var5); // deivision between two integers so everything is lost
    printf("Var6 = %0.2f\n", var6); // show up to two places because of using float values
    return 0;
}