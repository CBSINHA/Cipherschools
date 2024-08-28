// Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus

// Sample Output :-

// Enter first integer: 10
// Enter second integer: 3
// Addition: 13
// Subtraction: 7
// Multiplication: 30
// Division: 3.33333
// Modulus: 1
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 1st integer: ";
    cin>>n1;
    cout<<"Enter 2nd integer: ";
    cin>>n2;
    cout<<"Addition: "<<n1+n2<<endl;
    cout<<"Subtraction: "<<n1-n2<<endl;
    cout<<"Multiplication: "<<n1*n2<<endl;
    if(n2==0)
    cout<<"Division by 0 not possible"<<endl;
    else{
    cout<<"Division: "<<float(n1)/n2<<endl;
    cout<<"Modulus: "<<n1%n2;
    }
 return 0;
}