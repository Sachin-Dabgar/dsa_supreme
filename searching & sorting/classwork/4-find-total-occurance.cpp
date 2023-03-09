#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findLastOccurance(int arr[], int size, int target){
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
            e = mid - 1;
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
    int target = 66;
    int lo = findLastOccurance(arr, size, target);
    int fo = findFirtsOccurance(arr, size, target);
    if(lo == -1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"Total occurance: "<<lo-fo+1<<endl;
    }

}