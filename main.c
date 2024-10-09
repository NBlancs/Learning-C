#include <stdio.h>

int main(){
    printf("Hello World Again\n\n");

    // COMMENTS

        // this is a single-line comment

        /* this is a multi-line comment
            this is a multi-line comment
            this is a multi-line comment
        */

    // VARIABLES

        // In C there are different types of variables such as
            // int, char, float, double, long, short, etc.

    int num = 10;       // The format specifier for this data type is %d
    char letter = 'A';  // The format specifier for this data type is %c
    float pi = 3.14;    // The format specifier for this data type is %f

        // note: you need format specifiers to print out the data in the variables

    printf("%d\n",num); // -> output: 10
    printf("%c\n",letter); // -> output: a
    printf("%f\n",pi); // -> output: 3.140000

        // print out the num and letter

    printf("\nThe number is %d and the letter is %c\n",num, letter); // -> output: The number is 10 and the letter is A

        //print out values without variables

    printf("I am %d years old\n", 21);

        // add variables together

    int x = 5;
    int y = 10;
    int sum = x + y;

    printf("The total sum is %d\n", sum); // -> output: The total sum is 15

        // declare multiple variables

    int a = 5,b = 10,c = 15;
    printf("The total sum in multiple variable is %d", a + b +c); // -> output: The total sum in multiple variable is 30

    // DATA TYPES

    // -----------------------
    return 0;
}



