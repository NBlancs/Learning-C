#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

        // Data Types         Format Specifier       Memory Size

            // int                %d or %i           2 or 4 bytes               
            // float              %f or %F           4 bytes
            // double               %lf              8 bytes
            // char                 %c               1 byte
            // String               %s    


        // get the memory size

        int myInt;
        float myFloat;
        double myDouble;
        char myChar;

        // note: must use the %lu format specifier to get the size

        printf("The size of int is %lu bytes\n",sizeof(myInt));
        printf("The size of float is %lu bytes\n",sizeof(myFloat));
        printf("The size of double is %lu bytes\n",sizeof(myDouble));
        printf("The size of char is %lu bytes\n",sizeof(myChar));


        // type conversion

            // two types of conversion in C
                // * Implicit Conversion - Automatic
                // * Explicit Conversion - Manually


        // Implicit conversion sample
        
        float myFloat1 = 9;

        printf("%f\n", myFloat1); // -> output: 9.000000

        // Explicit conversion sample

        float totalsum = (float) 5/2;
        printf("%f\n", totalsum); // -> output: 2.500000

            // note: you can use the (int) to convert the data type of the variable



    // CONSTANTS

        // constants are unchangeable and read-only

    const int ranNum = 21;

    printf("The age is %d\n", ranNum);

    // OPERATORS

     // C Divides the operators into the following groups:
        
        // Arithmetic Operators
        // Assignment Operators
        // Comparison Operators
        // Logical Operators
        // Bitwise Operators

    // BOOLEANS

        bool isStudent = true;  // true isStudent = true;
        bool isStudying = false; // false isStudying = false;

        printf("Are you a student: %d\n", isStudent); // -> output: Are you a student: 1
        printf("Are you studying: %d\n", isStudying); // -> output: Are you studying: 0

        // note: 1 -> true and 0 -> false


    // CONDITIONAL STATEMENTS

        // if statement, if else statement, if else if statement

    int age = 21;

        if (age >= 18){
            printf("You are an adult\n");
        } else if (age < 0) {
            printf("Age invalid\n");
        } else {
            printf("You are not an adult\n");
        }

    // SWITCH STATEMENTS
    int day = 4;

        switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        }

    // WHILE-LOOP

        // while loop
    int i = 0;

    while (i <= 5){
        printf("%d\n", i);
        i++;
    }

        // do/while loop

    int ii = 0;

    do {
        printf("%d\n", ii);
        ii++;
    }
    while (ii <= 5);

        // print even numbers

    int j = 0;

    while (j <= 20){
        printf("%d\n", j);
        j += 2;
    }

        // print odd numbers

    int k = 0;

    while (k <= 20){
        printf("%d\n", k);
        k += 3;
    }

        // reverse a number

    int numbers = 123456789;
    int revnum = 0;

    while (numbers){
        revnum = revnum * 10 + numbers % 10;
        numbers /= 10;
    }

    printf("%d", revnum);

    // FOR LOOPS
    
    for (int i = 0; i < 15; i++){
        printf("%d\n", i);
    }

        // nested for loops

        for (int i = 0; i < 5; i++){
            printf("Outer Loop: %d\n", i);
            for (int j = 0; j < 5; j++){
                printf("  Inner Loop: %d\n", j);
            }
        }

        // break and continue
            // break -> used to jump out of a loop
            // continue -> statement breaks one iteration (in the loop)


    // ARRAYS

    int arr[]  ={10,15,20,25,30,35,40};

        // access the elements of an array
    printf("%d\n" ,arr[0]); // outputs -> 10

        // change an array element
    arr[1] = 16; // the index [1] in the array has now a value of 16 instead of 15

        // loop through an array
    for (int i = 0; i < 7; i++){
        printf("%d\n", arr[i]);
    }

        // set array size
            // also another common way to create arrays
        int arrays[4];

        arrays[0] = 11;
        arrays[1] = 22;
        arrays[2] = 33;
        arrays[3] = 44;

        // get array size or length

        printf("%lu\n", sizeof(arrays)); // This will just print out the size of the array in bytes instead of the number of elements

        // here's how you can get the size of an array based on its element

        int length = sizeof(arrays) / sizeof(arrays[0]); 

        printf("%d\n", length); // outputs -> 4

        // also you can use it in a for loop substitute for .length
        int grades [] = {95,99,100};
        int size = sizeof(grades) / sizeof(grades[0]);

        for (int i = 0; i < size; i++){
            printf("%d\n", grades[i]);
        }

    // MULTI DIMENSIONAL ARRAYS

        // [2] -> number of rows
        // [3] -> number of columns
    int matrix[2][3] = {{1,2,3},{3,4,5}};

        // access the elements of a 2D array

    printf("%d\n", matrix[0][2]); // outputs -> 3

        // change elements in a 2D array
    matrix[0][0] = 50;
    

        // Loop through a 2D array

        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 3; j++){
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

    // STRINGS 

        // C doesnt have a string type instead you must use char type to create an array of characters to make a string

    char fullName[] = "Noel Blancos";
    printf("%s\n", fullName);

    int length1 = sizeof(fullName) / sizeof(fullName[0]);

        // loop through a string 

    for (int i = 0; i < length1; i++ ){
        printf("%c\n", fullName[i]);
    }

        // get the length of a string

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));

        // concatenate strings

        char str1[20] = "Hello";
        char str2[] = " Kalibutan";

        strcat (str1, str2);

        printf("%s\n", str1);

    //USER INPUTS

            // int inputNum;
            // char inputChar;

            // printf("Input Number here: ");

            // scanf("%d", &inputNum);
            // printf("Your number is %d\n\n", inputNum);

            //     // multiple inputs

            // printf("Input Number and Char here: ");
            // scanf("%d %c", &inputNum, &inputChar);

            // printf("Your number is %d\n", inputNum);

            // printf("Your char is %c\n", inputChar);

        // take string input

    char inputfullName[30];

            // printf("Input your fullname: ");

            //     // use fgets() when working with strings instead of scanf()

            // fgets(inputfullName, sizeof(inputfullName), stdin);

            //     // note: use scanf() to get single world
            //     // and fgets() for multiple words

            // printf("Your full name is %s", inputfullName);

    // Memory Address
    int pointerNumber = 50;
    printf("The memory address is located at %p\n\n", &pointerNumber);

        //creating pointers

    int memoryNumber = 777;

    printf("%d\n", memoryNumber); // outputs -> 777 
    printf("%p\n", &memoryNumber); // outputs -> 0061FDE0 

        // pointer variable

    int sourceNum = 10; // int variable
    int* pointsToSourceNum = &sourceNum; // pointer variable, stores the address of sourceNum

    printf("Memory address of source number is at %p\n", &pointsToSourceNum);

        // dereference

    printf("%d\n", *pointsToSourceNum);

        // pointers and arrays

    int randomNums [] = {2,3,5,6,7,1,2,3,4};
    int length3 = sizeof(randomNums) / sizeof(randomNums[0]);

    for (int i = 0; i < length3; i++){
        printf("%p\n", &randomNums[i]); // loops out the memory address of each number in the array
    }

    printf("\n%p\n", randomNums); // outputs -> the same memory address as the first element in the array
    printf("%d\n", *randomNums);// outputs -> 2

        // to access the rest of the elements you can just increment the pointer

    printf("%d\n", *(randomNums + 1)); // gets the second element
    printf("%d\n", *(randomNums + 2)); // gets the third element

        // you can also just loop through it

    int *pointerToRandomNums = randomNums;

    for (int i = 0; i < length3; i++){
        printf("%d\n" , *(pointerToRandomNums + i));
    }

        // change the array value of elements with pointers

    *randomNums = 10; // changes the first element to 10
    *(randomNums + 1) = 15; // changes the second element to 17 

    printf("%d\n", *randomNums);
    printf("%d\n", *(randomNums + 1));
    return 0;
}



