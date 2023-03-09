#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int main(){
    // vector<int>arr{1,2,3,4,5,6,7,8};
    int arr[] = {1,2,3,4,5,6,7,8};
    // int size = arr.size();
    int size = sizeof(arr)/sizeof(int);
    int target = 1;
    int isFound = binarySearch(arr, size, target);
    if(isFound == -1){
        cout<<"Element "<< target<< " is not found"<<endl;
    }
    else{
        cout<<"Element "<<target<<" found at index "<<isFound<<endl;
    }

    // we have STL binary search function
    if(binary_search(arr, arr+size, target)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    // if vector is there
    // binary_search(v.begin(), v.end(), target);
}