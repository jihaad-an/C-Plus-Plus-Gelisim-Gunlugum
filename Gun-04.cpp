#include <iostream>
using namespace std;

/* control statments : 
we can categorize in almost two groups : 

1-selection control statments : 

if: Executes a block of code only if a specified condition is true.

else: Provides an alternative block of code to execute when the if condition is false.

else if: Tests a new condition if the previous conditions evaluate to false.

switch: Selects one of many code blocks to be executed based on a variable's value.



2-repetition control statments : 
*/


int main()
{
    int grade ;
    cout << " Enter your grade \n" ;
    cin  >> grade;
    
    // control grade using (if) statement : 
    if (grade >= 60) // if grade is equal or bigger then 
    {
       cout << " Succeeded \n" ;// print this 
    }

    else 
    {
        cout << "failed ! \n";
    }



    // example 2 :  else - if 

    int number ; 

    cout << " Please enter a number ! \n";
    cin  >> number;

    if (number > 0 )
       if (number % 2 == 0)
           cout << " Even \n";
     
       else
           cout << "Odd \n" ;   
      




       // example 3 : if else if :    
       
       int grade2;

       cout << "Please enter your grade : \n" ;
       cin  >> grade2;
       
       if (grade2 >= 90)
           cout << "A \n";

        else if (grade2 >= 80)
                cout << "B \n";
        
        else if (grade2 >= 70)
                cout << "C \n" ;
                
         else if (grade2 >= 60)
                cout << "D \n" ;
         else 
                cout << "F \n";       
                    
        
       
       
    
    
    
    return 0 ; 

}


/*
  relational operators : 
  == : is operand 1 equal operand 2 .
  != : is operand 1  not equal operand 2 .
  < : is operand 1 less than operand 2 . 
  <= : is operand 1 less than operand 2  or equal . 
  > : is operand 1 greater than operand 2 . 
  >= : is operand 1 greater than operand 2  or equal . 


*/

/*

   logic ooperators : 

   && : if and only if both conditions are true .
   || : the expression value is true if one condition or both are true .
*/