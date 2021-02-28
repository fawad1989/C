// Data type Char
#include<stdio.h>
/*
character (A,B,C,D) size is 1 byte
ASCII represented Integer can hold either 2 or 4 bytes (Because integer is either 2 bytes or 4 bytes)
syntax: char var_name = 'F';
1. Things to remember is to use single quotes with char variable
2. One variable will contain one character
3. Character can be both a character or integer. If integer the associated ASCII code will be printed
4. Data type holder is "%c"
5. In ASCII each character is 7 bits but in extended it is 8 bits

*/
int main()
{
    char var1 = 'F';
    char var2 = 65; // ASCII Value for A
    char var3 = 'A';
    printf("var1: %c\n", var1);
    printf("var2: %c\n", var2);
    printf("var3: %c\n", var3);
    printf("%ld\n",sizeof(var1));
    printf("%ld\n",sizeof(var2));
    // Playing with the range
    printf("----------------------------\n");
    char var4 = 128; // same charachter as -128 in extended ASCII Table
    char var5 = -128;
    printf("var4: %c\n", var4);
    printf("var5: %c\n", var5);
    printf("----------------------------\n");
    char var6 = 129; //same character as -127 in extended ASCII Table
    char var7 = -127;
    printf("var4: %c\n", var6);
    printf("var5: %c\n", var7);
    return 0;
}