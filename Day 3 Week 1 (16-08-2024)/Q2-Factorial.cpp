// Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24"
#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    cout<<"The factorial of "<<n<<" is: "<<fact;
    return 0;
}