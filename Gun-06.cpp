#include <iostream>
using namespace std; 


// Repetition statements : 



int main() 
{
    // while loop : 
  int counter = 1;
  int grade = 0 ;
  int sum = 0; 


  while (counter <= 6) // while the counter is equal or less than 6  go inside the body  
{
    cout << " Enter the student grade \n";

    cin >>  grade;
    sum += grade ;  // every time the sum will bee the 1.st grade + the 2.grade.....
    cout << " the  sum of students grade is : " << sum <<"\n";
        cout << " the  average  of students grade is : " << sum / 6 <<"\n";

     counter ++ ;   // this is too important to cut the infinity loop 



}  

  // do - while loop : 

  // in this loop , either all conditions are false at least will run one time 

  do
  {
    cout << " Enter the student grade \n";

    cin >>  grade;
    sum += grade ;  // every time the sum will bee the 1.st grade + the 2.grade.....
    cout << " the  sum of students grade is : " << sum <<"\n";
        cout << " the  average  of students grade is : " << sum / 6 <<"\n";

     counter ++ ; 
  } while (counter <= 6);
  

  // for loop : 

  for (int  counter = 1 ; counter <=6 ; counter ++)
  {
      
    cout << " Enter the student grade : \n";
    cin >> grade ; 

    sum += grade ;
  }

  cout << "The average of grades is : " << sum /6  ;
  



  // ex 2 :  write the numbers from 0 to 10 : 
  
  int i ;

  for (i = 0 ; i <= 10; i ++)
  {
    cout << i << "\n" ;
  }
       
  // ex 3  : sum even and odd numbers  : 

  int number  ;
  int sumEven = 0 ;
  int sumOdd = 0;
   
    for(i = 1 ; i <= 10 ; i++)
    {
        cout << "enter number : \n" ;
        cin >> number ;

          if (number %2 = 0)
               sumEven += number ;

          
         sumEven += number ; 

         else

          sumOdd += number;



    }

          cout << "The sum of even numbers is : " << sumEven<< "\n";
          cout << "The sum of odd numbers is : " << sumOdd<< "\n";


return 0 ;

}