// Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

// Sample Input:- Enter the first number: 10
// Enter the second number: 20
// Enter the third number: 15

// Sample Output :- The largest number is: 20
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,largest;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    largest=n1;
    if(largest<n2)
    largest=n2;
    else if(largest<n3)
    largest=n3;
    else
    largest=n1;
    cout<<"The largest number is: "<<largest;
    return 0;
}