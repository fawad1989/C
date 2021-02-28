#include <stdio.h>
#include <limits.h>
/*
Data Types
1. Integer or int data type takes 2 or 4 bytes 
meaning wether 16bits or 32 bits depending on the 
system but mostly now machines are 32 bits.
Data Modifers are as follows
1. short,
2. long,
3. signed and unsigned 
#IMPORTANT POINTS#
1. %d place holder for signed values
2. %u place holder for unsigned values
3. %ld place holder for long signed values
4. %lu place holder for long unsigned values
5. %lld place holder for long long signed values
6. %llu place holder for long long unsigned values
7. singed int i = int i or if signed i (Compiler implicitely assumes int data type)
8. unsigned i is also correct as compiler is defult int
9. Similarly long i and long long i is also integers as for compiler int is default 
*/
int main()
{
    //Data type int examples
    printf("Size of int:%d bytes\n", sizeof(int)); // sizeof(parameter) will return the size of the value inside
    printf("Size of shortint:%d bytes\n", sizeof(short int)); // half of int size but can be equal to int
    printf("Size of longint:%d bytes\n", sizeof(long int)); // double of int size but can be equal to int
    printf("-----------\n");
    int a; // it is a signed integer, neg range to pos range [-((2^n-1) to (2^n-1) -1)]
    unsigned int b; // it is an unsigned integer, 0 to pos range [(2^n)-1]
    // signed integer
    int svarmax = INT_MAX;
    int svarmin = INT_MIN; // integer max
    printf("The range of signed integer is from %d to %d\n", svarmin, svarmax);
    printf("-----------\n");
    // Unsigned integer
    unsigned int usvarmin = 0;
    unsigned int usvarmax = UINT_MAX; // UINT_MAX is unsigned integer max
    printf("The range of unsigned integer is from %u to %u\n", usvarmin, usvarmax); // place holder %u is unsigned integer format
    printf("-----------\n");
    // Short signed integer
    short int shvarmin = SHRT_MIN;
    short int shvarmax = SHRT_MAX; // SHRT_MAX is short signed integer max
    printf("The range of short signed integer is from %d to %d\n", shvarmin, shvarmax); // place holder %u is unsigned integer format
    printf("-----------\n");
    // short unsigned integer
    unsigned short int shuvarmin = 0;
    unsigned short int shuvarmax = USHRT_MAX; // USHRT_MAX is short unsigned integer max
    printf("The range of  short unsigned integer is from %u to %u\n", shuvarmin, shuvarmax); // place holder %u is unsigned integer format
    printf("-----------\n");
    // Long signed integer
    long int lovarmin = LONG_MIN;
    long int lovarmax = LONG_MAX; // LONG_MAX is long signed integer max
    printf("The range of long signed integer is from %ld to %ld\n", lovarmin, lovarmax); // place holder %u is unsigned integer format
    printf("-----------\n");
    // Long unsigned integer
    unsigned long int louvarmin = 0;
    unsigned long int louvarmax = ULONG_MAX; // ULONG_MAX is long unsigned integer max
    printf("The range of  long unsigned integer is from %lu to %lu\n", louvarmin, louvarmax); // place holder %u is unsigned integer format
    printf("-----------\n");
    // Exceeding the Range
    // for unsigned integer max range is 4294967295
    unsigned int uvar = 4294967295;
    printf("max unsigned int is: %u\n",uvar);
    unsigned int uvarover = 4294967296; // exceeding range will give 0
    printf("max unsigned int is: %u\n",uvarover);
    // for signed integer range is from -2147483648 to 2147483647
    unsigned int svar = -2147483648;
    printf("max unsigned int is: %u\n",svar);
    unsigned int svarover = -2147483649; // exceeding range will give max positive value
    printf("max unsigned int is: %u\n",svarover);//
    // Solution for bigger number is to use the long int or long long int
    
    
    
    return 0;
}