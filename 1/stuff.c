//------------VARIABLES-----------//

//Size of int: 4 bytes
//Size of float: 4 bytes
//Size of double: 8 bytes
//Size of char: 1 byte


//the following program prints the size of each one of the variable types in bytes
#include <stdio.h>

int main()

{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    // Sizeof operator is used to evaluate the size of a variable
    
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    
    printf("Size of char: %ld byte\n",sizeof(charType));

    return 0;
}




//----------IF-STATEMENT----------//
/*

     basic format 
     
if (Expression) 
      {
        // statements
      }
      
      
      
      
*/
      
