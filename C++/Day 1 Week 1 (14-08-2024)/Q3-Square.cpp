// Ques-03 - Write a C++ program that takes an integer as input from the user and outputs its square.

// Sample Input:- Enter a number: 7

// Sample Output :- The square of 7 is: 49
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The square of "<<n<<" is: "<<pow(n,2);
    return 0;
}