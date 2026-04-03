#include <iostream>
using namespace std;

int main()
{
    int width ; // declare a variable called width type integer .
    int length ; 
    int area ; 

    // ask user to input value to width : 

    cout << " please enter rectangle width !  \n";
    // user passing value : 
    cin >> width;

    cout << "please enter rectangle length ! \n" ; 
    cin >> length;
    
    // proseccing : 
    area = width * length ;  


    // print the result  : 
    cout <<"area of rectangle equal : " << area  << "\n";
     


     return 0 ; 

}