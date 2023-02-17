#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> findIntersection(vector<int> arr1, vector<int> arr2){
    vector<int> ans;

    for(int i = 0; i<arr1.size(); i++){
        for(int j = 0; j<arr2.size(); j++){
            if (arr1[i] == arr2[j]){
                ans.push_back(arr1[i]);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return ans;
}

int main(){

    vector<int> arr1 = {1,2,3,4,5,2,1};
    vector<int> arr2 = {3,8,9,4,1,3,1};

    vector<int> ans = findIntersection(arr1, arr2);

    for(auto i: ans){
        cout<<i<<" ";
    }

    cout<<endl;

}