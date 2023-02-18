#include<iostream>
#include<limits.h>
using namespace std;

void findMinMax(int arr[][3], int rows, int cols){

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }

            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    cout<<"max element in array is : "<<max<<endl;
    cout<<"min element in array is : "<<min<<endl;

}

int main(){
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {
        {10,2,13},
        {14,-1,36},
        {0,28,19}
    };

    findMinMax(arr, rows, cols);

}