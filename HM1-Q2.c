/* Find and correct the mistake(s) in the following C program, then run the program with integer1 = 4 and integer2 = 5.
	
/* Addition program */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */    // add ; to the end
   int integer2; /* second number to be input by user */    // add ; to the end
   int sum;      /* variable in which sum will be stored */     // the int sum doesn't exist we need to interchange value x and sum

   printf( "Enter first integer\n" ); /* prompt */    // the stringer doesnt written in "" 
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */

// The code is working now.

