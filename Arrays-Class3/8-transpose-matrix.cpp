#include<iostream>
#include<limits.h>
using namespace std;

void transpose(int arr[][3], int rows, int cols){
    for(int i = 0; i<rows; i++){
        for(int j = i; j<cols; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {
        {2,4,5},
        {1,3,6},
        {9,11,7}
    };

    transpose(arr, rows, cols);

    for(int i = 0; i<cols; i++){
        for(int j = 0; j<rows; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}