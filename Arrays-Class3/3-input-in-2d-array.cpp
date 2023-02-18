#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    int rows = 3;
    int cols = 3;

    int arr[rows][cols];

    cout<<"taking input for 3*3 matrix"<<endl;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"printing output for the input taken matrix"<<endl;

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}