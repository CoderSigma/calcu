#include <iostream>
using namespace std;

int main() {
    int num1, num2,r;
    cout << "Choose operand \n";
    cout << "1.Addition \n";
    cout << "2.Subtraction \n";
    cout << "3.Division \n";
    cout << "4.Multiplication \n";
    cin >> r;
    
    switch(r){
        
       case 1:
       cout << "Enter first number\n";
       cin >> num1;
       cout << "Enter second number\n";
       cin >> num2;
       cout << "The output :" << num1 + num2;
       break;
       
       case 2:
       cout << "Enter first number\n";
       cin >> num1;
       cout << "Enter second number\n";
       cin >> num2;
       cout << "The output :" << num1 - num2;
       break;
       
       
       case 3:
       cout << "Enter first number\n";
       cin >> num1;
       cout << "Enter second number\n";
       cin >> num2;
       cout << "The output :" << num1 / num2;
       break;
       
       
       case 4:
       cout << "Enter first number\n";
       cin >> num1;
       cout << "Enter second number\n";
       cin >> num2;
       cout << "The output :" << num1 * num2;
       break;
       
       default:
       cout << "Invalid input";
       
       
    }
   
    
    return 0;
    }
