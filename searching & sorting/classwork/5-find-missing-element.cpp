#include<iostream>
#include<vector>
using namespace std;

int findMissingElement(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;

    int m = s + (e-s)/2;

    while(s<=e){
        if(m+1 == arr[m]){
            s = m+1;
        }
        else if(m+1 < arr[m]){
            e = m-1;
        }
        else if(m+1 > arr[m]){
            s = m-1;
        }
        m = s + (e-s)/2;
    }

    if(e<s){
        return arr[m] - 1;
    }
    else{
        return arr[m] + 1;
    }
    return -1;
}

int main(){
    vector<int> arr{
        1,2,3,4,5,6,7,8,9,9
    };
    int element = findMissingElement(arr);
    cout<<"Missing Element is: "<<element<<endl;
}