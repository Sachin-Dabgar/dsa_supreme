#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int coinChange(vector<int>& arr, int target){
    if(target == 0){
        return 0;
    }

    if(target < 0){
        return INT_MAX;
    }

    int minimumCoinsRequired = INT_MAX;
    for(int i = 0; i<arr.size(); i++){
        int ans = coinChange(arr, target-arr[i]);
        if(ans != INT_MAX){
            minimumCoinsRequired = min(ans+1, minimumCoinsRequired);
        }
    }

    return minimumCoinsRequired;

}



int main(){
    vector<int> arr{1,2};
    int target = 5;
    int ans = coinChange(arr, target);
    cout<<" minimum coins required to make target is: "<<ans<<endl;
}