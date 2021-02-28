# include <stdio.h>


int main()
{
    printf("-----Question:1------\n");
    printf("%d\n", printf("%s","Hello World!\n")); // \n is one character
    /*
    1. %s will print hello world! and it is a char array i.e. string of charachters
    2. %d will return or print the number of characters in the char array that has been printed on the scree
    */
    printf("-----Question:2------\n");
    printf("%s\n","Hello");
    printf("%10s","Hello"); // %10s means print character upto 10 charachters wide.Becasue of lack of character white spaces are added in the front
    printf("\n-----Question:3------\n");
    char c = 255;
    c = c + 10; // it will roll at 255 and the new c = 9
    printf("%d\n",c); // will give value 9 on the ASCII Table b/c at 255 it rolled over till 9 
    printf("%cdada\n",c); // in ASCII Table 9 is Horizontal Tab
    printf("\tdada");// Added \t (1 tab = 4 spaces) before text to verify
    printf("\n-----Question:4------\n");
    unsigned i = 1;
    int j = -4;
    printf("%u\n",i+j); // printing unsigned integer
    printf("%d",i+j); //will bring -3 because its then signed integer
    printf("%c\n",i+j); // will print the ASCII character start of text
    /* EXPLANATION
    The max value for unsigned int is 4294967295, actual values stands at 1 and when -4 is added the answer is -3
    so the number is right now at 1 subtract 1 ith will move to 4294967295, subtract two it will move to 4294967293
     so -3 will be equal to 2's compliment of 3. For the sake of ease lets take a 4 bit value --  
     As 3 in binary is 0011, 1's complement is 1100, 2's compliment is 1101, if leading 1s till 32 bit are added, 
     the binary conversion would be equal to 4294967293  
     */
    
    return 0;
}



