#include<iostream>
#include<vector>
using namespace std;

int searchInNearlySortedArray(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(target == arr[mid]){
            return mid;
        }
        else if(mid > 0 && target == arr[mid - 1]){
            return mid-1;
        }
        else if(mid < arr.size()-1 && target == arr[mid + 1]){
            return mid + 1;
        }
        else if(target < arr[mid]){
            e = mid - 2;
        }
        else{
            s = mid + 2;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int main(){
    vector<int> arr{10,8,30};
    int target = 10;
    int ans = searchInNearlySortedArray(arr, target);
    cout<<"your element is present at index "<<ans<<endl;
}