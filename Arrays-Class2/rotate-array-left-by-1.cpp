#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void reverseArray(int arr[], int i, int j){
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}


void rotateArray(int arr[], int k, int n){
    int size = n;
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, size-1);
    reverseArray(arr, 0, size-1);
}

int main(){
    // vector<int> arr = {1,2,3,4,5};
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 3;

    rotateArray(arr, k, n);

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
}