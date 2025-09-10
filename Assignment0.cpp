#include <iostream> 
using namespace std;


int main() { 




/* 


Prompting for and Reading User Input:

Prompt the user to input two numbers as floating-point values (doubles).
Store the input values in appropriately typed variables.



*/


float first_num ; 
float sec_num;

cout << "Enter the first number (floating-point): \n"; 
    cin >> first_num; 
cout << "Enter the second number (floating-point):  \n"; 
    cin >> sec_num; 
cout << "The first number is " << first_num << "\n\n" << endl; 

cout << "The second number is " << sec_num << "\n\n" << endl; 

cout << "\n\n"; 
cout << "FLOATING-POINT results : \n";




/* 

Performing Floating-Point Arithmetic:

Using the floating-point numbers provided by the user, perform addition, subtraction, multiplication, and division.
Store the results of these operations in variables.


*/
float sum = first_num + sec_num; 
    cout <<"Sum : " << sum << "\n\n" << endl;
float diffrence = first_num - sec_num; 
    cout <<"Diffrence : "<< diffrence << " \n\n" << endl; 
float product = first_num * sec_num ; 
    cout <<"Product : " << product <<"\n\n"<<endl;
    float quotient = first_num / sec_num; 
    cout <<"Quotient : " <<quotient<<"\n\n"<<endl; 

    int first_int = static_cast<int>(first_num);
    int second_int = static_cast<int>(sec_num);

  //  cout << first_int <<endl;  //test 
  //  cout << second_int << endl; //test 
  //  cout << " hello world "; //test 
  int division_quotient = first_int / second_int; 
  cout << "Integer results (using truncated values): \n\n " <<
"Integer Division Quotient: \n\n " << division_quotient << " \n\n ";


int remainder = first_int % second_int ; 
cout << " Modulus: " << remainder <<endl; 
return 0 ;

