#include <stdio.h> // header file it standard input and output and contains several builtin functions
// the above line is preprocessor director and it brings forth the source code of these files thus reducing the program size and complexity
// stdio contains functions like printf and scanf and so on
//  
int main(){ //  main is a function and the things inside the curly braces are the things that need to be done
    int age; // Variable
    printf("Fawad\n"); // function from stdio.g
    printf("Enter age:");
    scanf("%d",&age);
    printf("Age is %d\n",age);
    //return 0; // if everything is executed correctly then return zero else return something else
}


// Function Syntax in C
/*
return_data type (int, float, str) Function name (Parameters (data type of parameter and name))
{
    Statements to be executed in the function
}
*/
