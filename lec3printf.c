#include <stdio.h>

int main()
{
    int var1 = 5;
    int var2 = 3;
    printf("Fawad\n"); // one input and is in double quotes
    printf("%d\n",var1); // 2 arguments, 1st is always in quoted becasue they are string constant 
    //i.e. sequence of characters to be printed on the screen. 
    //%d is a place holder for format specifier of variable meaning thake the value form the 
    //memory location named var in this case and 
    //replace it for the sequence of the characters 
    //and the second is the memory name
    printf("%d %d\n", var1, var2);
    int a = 2, b = 7, c =1 ;
    int res = a+b+c;
    printf("a=%d, b=%d and c=%d\n",a,b,c);
    printf("Result of %d + %d + %d = %d\n",a,b,c,res);
    return 0;
}