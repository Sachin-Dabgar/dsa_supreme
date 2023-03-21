#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55

int binarySearch(vector<int>& arr, int s, int e, int key){
    //base case
    if(s>e){
        return -1;
    }

    int m = s + (e-s)/2;
    if(arr[m] == key){
        return m;
    }
    else if(key < arr[m]){
        return binarySearch(arr, s, m-1, key);
    }
    else{
        return binarySearch(arr, m+1, e, key);
    }
}


int main(){

    vector<int> arr{2,4,6,6,6,6,7,8,9};
    // vector<int> arr{10,20,30,40,50};
    // vector<int> arr{10,20,30,40,50,60};
    // vector<int> arr{10,20,40,30,60,50};
    // vector<int> arr{10,20,20,30,30,40,40,50};
    // vector<int> arr{10};
    int s = 0;
    int e = arr.size()-1;
    int key = 6;
    int ans = binarySearch(arr, s, e, key);
    if(ans != -1){
        cout<<key<<" is at index "<<ans<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}