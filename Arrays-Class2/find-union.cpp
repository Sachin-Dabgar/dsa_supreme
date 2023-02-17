#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> findUnion(vector<int> arr1, vector<int> arr2){
    vector<int> ans;

    for(int i = 0; i<arr1.size(); i++){

        for(int j = 0; j<arr2.size(); j++){
            if (arr1[i] == arr2[j]){
                arr2[j] = INT_MIN;
            }
        }

        ans.push_back(arr1[i]);
    }

    for(int j = 0; j<arr2.size(); j++){
        if(arr2[j] != INT_MIN){
            ans.push_back(arr2[j]);
        }
    }

    return ans;
}

int main(){
    
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,3,9,8,5};

    vector<int> ans = findUnion(arr1, arr2);

    for(auto i : ans){
        cout << i << " ";
    }

    cout<<endl;

}