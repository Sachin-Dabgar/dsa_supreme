#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int> arr = {10,20,30,40,50,60};
    int sum = 80;

    // printing the pair which sums to 80
    for(int i = 0; i<arr.size(); i++){
        int element1 = arr[i];

        for(int j = i+1; j<arr.size(); j++){
            int element2 = arr[j];
            if(element1 + element2 == sum){
                cout<<element1<<","<<element2<<endl;
            }
        }
    }

}