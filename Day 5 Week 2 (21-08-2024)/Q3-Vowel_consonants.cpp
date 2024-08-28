// Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase.

// Sample Input:
// Enter a string: cipherschools

// Sample Output:
// Number of vowels: 4
// Number of consonants: 9
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[100];
    int vowel=0,consonant=0;
    cout<<"Enter a string: ";
    cin>>arr;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        vowel++;
        else
        consonant++;        
    }
    cout<<"Number of vowels: "<<vowel<<endl;
    cout<<"Number of consonants: "<<consonant<<endl;
 return 0;
}