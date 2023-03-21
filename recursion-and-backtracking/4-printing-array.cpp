#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55

void printArr(int arr[], int n, int i){
    //base case
    if(i==n){
        return;
    }

    printArr(arr, n, i+1);
    cout<<arr[i]<<endl;

}


int main(){

    int arr[5]{10,20,30,40,50};
    int n = 5;
    int i = 0;
    printArr(arr, n, i);
    return 0;
}