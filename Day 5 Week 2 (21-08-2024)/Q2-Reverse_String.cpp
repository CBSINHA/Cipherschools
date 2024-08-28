// Ques-02 Write a C++ function that takes a string as input and reverses it.

// Sample Input:
// Enter a string: CipherSchools

// Sample Output:
// Reversed string: sloohcSrehpiC
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int len;
    len=str.length();
    for(int i=len;i>=0;i--)
    cout<<str[i];
 return 0;
}