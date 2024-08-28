// Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9
#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
            while(j>0&&arr[j-1]>arr[j] ){
                swap(arr[j-1],arr[j]);
                j--;
            }
    }
    cout<<"Output: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n,arr[100];
    cout<<"N: ";
    cin>>n;
    cout<<"arr[]: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    InsertionSort(arr,n);
 return 0;
}