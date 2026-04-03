#include <iostream>
using namespace std;

int main () 
{
    /*
    Declaring & initializing Variables : 
     int x = 13  => initial value of x is 13 
     double b = 12.4  => initial value of b is 12.4
      
     char y = 'A' nitial value of y is (A)
    */

    int i  = 5 , k = 7  , j;
    j = k + i  ;

    cout << j << "\n" ; 

    // rules on variables names : 
    // do not use reserves words (for ,else ,if , switch ......).
    //  the first character has to be a letter or underscore.(it can not be a numeric digit)
    //  do not start with special characters .

    // examples : my_name     ,  _one  ,  bluemMoon  , m113_1     

       /*
       
        Data atypes : 
        1_ int : 4byte    => 32 bit 
        2_ short : 2 byte  =>  16 bit
        3_ double : 8 byte  => 0.23 ,  33.5       has a precidion of fifteen digits 
        4_ unsigned :  4 byte => just positive int numbers 
        5_ float :  4 byte  its like double but for smaller numbers . and has a precision of seven dijits
       
       */
      

       /*
        arithmatic operations : 
        Addition  : ( + )   ex :  a +7 
        subtraction : ( - )  ex :  p - c 
        multiplication : ( * ) ex : 6*4
        division : (/)   ex : 10 / 2 
        modulus : (%)    r % s 

        and 
         
        x^2 = x*x 

          */
        int a = 5 , b = 10 , c  = 7 ;

        float average ;  
        average = (a + b + c) /3; 
         cout << average ; 
        
         /*
         
         increment and decrement operator : 

         ex : int x = 5 ; ,
         x ++ ;   => x = 5 +1  or x = x +1 
         cout << x << "\n"

         ex : int x = 5 ; ,
         x -- ;   => x = 5 -1  or x = x - 1 
         cout << x << "\n"


         ex : int x = 5 ; ,
         x +=20 ;   => x = 5 + 20  or x = x + 20
         cout << x << "\n"



         
         */

}