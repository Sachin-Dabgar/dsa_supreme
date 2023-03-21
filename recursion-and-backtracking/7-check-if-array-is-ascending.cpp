#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55

bool checkAscending(vector<int>& arr, int i){
    //base case
    if(i == arr.size()){
        return true;
    }

    if(arr[i] >= arr[i-1]){
        return checkAscending(arr, i+1);
        // return flag;
    }
    return false;
}


int main(){

    // vector<int> arr{2,4,6,8,9,7};
    // vector<int> arr{10,20,30,40,50,60};
    // vector<int> arr{10,20,40,30,60,50};
    // vector<int> arr{10,20,20,30,30,40,40,50};
    vector<int> arr{10};
    bool flag = checkAscending(arr, 1);
    if(flag){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
}