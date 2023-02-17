#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int> arr = {0,1,0,1,1,0,1,0,0,1,0,1,1,1,0,0,0,1};

    int s = 0;
    int e = arr.size()-1;
    int i = 0;

    while(i<e){
        if(arr[i] == 0){
            swap(arr[i], arr[s]);
            i++;
            s++;
        }

        if(arr[i] == 1){
            swap(arr[i], arr[e]);
            e--;
        }
    }

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
}