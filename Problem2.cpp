#include <iostream>
/*
    Given an array of integers, return a new array such that each element at index i of the new array is the product of
    all the numbers in the original array except the one at i.

    For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
    If our input was [3, 2, 1], the expected output would be [2, 3, 6].

*/
using namespace std;

void NewArray (int arr[], int n){
int factorial=1;

for(int i=0;i<n;i++){
    factorial=factorial*arr[i];
}

for(int i=0;i<n;i++){
    cout<<factorial/arr[i]<<", ";

}
}

int main(){

int n;
cout<<"Input array size: ";
cin>>n;
int arr[n];
cout<<"Input array:\n";

for(int i=0;i<n;i++){
    cin>>arr[i];
}

NewArray (arr,n);

return 0;
}
