#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


void sumOfNonAdjecent(vector<int>& arr, int sum, int i, int& maxi){

    if(i > arr.size()){
        maxi = max(sum, maxi);
        return;
    }

    // inclusive
    sumOfNonAdjecent(arr, sum+arr[i], i+2, maxi);
    // exclusive
    sumOfNonAdjecent(arr, sum, i+1, maxi);

}

int main(){
    
    vector<int> arr{2,1,4,9};
    int maxi = INT_MIN;
    int sum = 0;
    int i = 0;
    
    sumOfNonAdjecent(arr, sum, i, maxi);

    cout<<maxi<<endl;
    
}