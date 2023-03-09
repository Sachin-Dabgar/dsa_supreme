#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findFirtsOccurance(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s) / 2;

    // storing the ans for first occurence of an element
    int ans = -1;
    while(s<=e){

        // found element and storing it's index to ans and searching in left of it.
        if(target == arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(target < arr[mid]){
            // searching in left
            e = mid - 1;
        }
        else if(target > arr[mid]){
            // searching in the right
            s = mid + 1;
        }

        // finding mid again
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main(){
    // vector<int>arr{1,2,3,4,5,6,7,8};
    int arr[] = {1,2,3,3,3,3,3,4,4,4,5,6,6,6,6,7,8};
    // int size = arr.size();
    int size = sizeof(arr)/sizeof(int);
    int target = 33;
    int isFound = findFirtsOccurance(arr, size, target);
    if(isFound == -1){
        cout<<"Element "<< target<<" is not found"<<endl;
    }
    else{
        cout<<"Last occurance of element "<<target<<" found at index " << isFound<<endl;
    }
}