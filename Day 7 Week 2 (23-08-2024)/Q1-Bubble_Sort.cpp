// /*Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.
// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}
// Output:
// 1 3 4 7 9*/
#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"N: ";
    cin>>n;
    cout<<"arr[]: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Sorted array using bubble sort is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
 return 0;
}