#include<iostream>
#include<limits.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55

void findMax(int arr[], int n, int i, int &maxi){
    //base case
    if(i == n){
        return;
    }

    if(arr[i] > maxi){
        maxi = arr[i];
    }

    findMax(arr, n, i+1, maxi);

}


int main(){

    int arr[7]{10,30,15,21,44,26,17};
    int n = 7;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr, n, i, maxi);
    cout<<maxi<<endl;
}