#include<iostream>
#include<vector>
using namespace std;

int findPivot(int arr[], int size){
    // int size = sizeof(arr)/sizeof(int);
    // int size = 10;
    int s = 0;
    int e = size-1;
    int m = s + (e-s)/2;
    while(s<e){
        if(m<size-1 && arr[m] > arr[m+1]){
            return m;
        }
        
        if(m>0 && arr[m-1] > arr[m]){
            return m-1;
        }
        
        if(arr[s] <= arr[m]){
            s = m + 1;
        }
        else if(arr[s] > arr[m]){
            e = m - 1;
        }

        m = s + (e - s) / 2;

        
    }

    if(m){
        return m;
    }
    
    return -1;
}

int main(){
    int arr[] = {11,12,13,17};
    int size = sizeof(arr)/sizeof(int);

    int element = findPivot(arr, size);
    cout<<"Pivot element is "<<arr[element]<<endl;
}