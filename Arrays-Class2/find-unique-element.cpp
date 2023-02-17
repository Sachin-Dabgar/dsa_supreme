#include<iostream>
#include<vector>
using namespace std;

int findUniq(vector<int> arr){
    int ans = 0;

    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int n;
    cout<<"enter the no of element to be stored"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int uniqElement = findUniq(arr);

    cout<<"Uniq element in the array is " << uniqElement << endl;

}