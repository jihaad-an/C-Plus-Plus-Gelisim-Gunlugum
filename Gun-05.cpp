#include <iostream>
using namespace std;

// switch statment : control the statemnt using cases.
// inside the switch statment for numbers u can only use int numbers , int constant .




int main()
{

    int i ; 

    cout << " Enter value for I : \n";
    cin  >> i ;
      // use switch : 
     switch (i)
     {
        case 10 :   // if i = 10 
                cout << " I am in case 1 \n";
                break;

        case 20 :  // if i = 20 
                cout << " I am in case 2 \n";
                break;
                
        case 30 : // if i = 30 
                cout <<  " I am in case 3 \n";
                break;
         
        default :  // if i nnot equal anyone of those : 
                cout << "I am in default case \n";

            
     }

     // note : if you forget breake statment the compiler will print all the massages 
     return 0 ;
 
}