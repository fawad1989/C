#include <stdio.h>

// Naming Conventions for Variables
    /*
    1. Dont start with number or special characters line underscore(system use so avoid) e.t.c.
    2. case sensitive but CAPITAL name are symbolic variable (Dont change)
    3. No spaces or blank, can use underscore in between e.g. my_variable is OKAY
    4. dont use reserved words
    */


int  main(){
    int constant = 3; // 2 or 4 byte depending the system used
    // or
    int var; // both are int data type but one has initial value and 
    //the other does not. if no value is given it is taken as equal to 0 
    printf("%d\n",constant);
    printf("%d\n",var);
    //Changed the values of the variable
    constant = 7;
    var = 5;
    printf("-------------\n");
    printf("%d\n",constant);
    printf("%d\n",var);
    printf("-------------\n");
    //setting value of one variable as the same with the other
    var = constant;
    printf("%d\n",constant);
    printf("%d\n",var);
    printf("-------------\n");
    int var1, var2, var3; // declared same data type variables together
    var1 = var2 = var3 = 15; // made their value equal to a value and all of the variable are equal in value.
    printf("%d\n",var1);
    printf("%d\n",var2);
    printf("%d\n",var3);
    








    return 0;
}