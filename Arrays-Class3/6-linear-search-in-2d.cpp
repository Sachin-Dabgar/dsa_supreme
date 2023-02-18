#include<iostream>
using namespace std;

bool linearSearch(int arr[][3], int rows, int cols, int item){

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(arr[i][j] == item){
                return true;
            }
        }
    }

    return false;

}

int main(){
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int item = 11;
    
    bool ans = linearSearch(arr, rows, cols, item);
    cout<<ans<<endl;
    // true => 1
    // false => 0

}