#include <stdio.h>
/*
Scope of variable is the area in the code the variable is initiated and if it can be used only in that
part of code or it can be used anywhere in the code
1. Local Variable >> Used in a particular area of the code. e.g. is a function
2. Global Variable >> can be used anywhere in the program
SCOPING
1. 
{
    .... Some Code
    {
        All the variable above are visible to this part
        But none of the internal block variables are not visible to the outer block
    }
}
2. Two separate functions and contents are not visible to eachother
{
    Block1
}
{
    Block2
}
*/

// 1st main >> uncomment for first main below
/* 
int main()
{
    int a = 13;
    //int a = 14; // will give error as a variable can only be initialized once
    /* //But if another block is made it is okay
    {
        int a =14;
        printf("%d\n",a); // will print a = 14, if a is not available in the black it will take the nearest same variable 
    }
    printf("%d\n" , a);
    return 0;
}
*/
//-------------------

//Un comment for 2nd main usage below

int func(); // function initialization
int var = 10; // global variable

// second main
int main()
{
    int var = 3; // local variable
    printf("%d\n",var); // will print local variable
    func();
    return 0;
}
int func() // this is not part of the main function
{
    //printf("%d" , a); // for 1st mainwill not execute as a is only available to main function
    printf("%d\n" , var); // second main >> will print global variable
}


