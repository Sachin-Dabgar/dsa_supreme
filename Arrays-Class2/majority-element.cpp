#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    bool flag = false;
    int A[]={3, 3, 4, 2, 4, 4, 2, 4};
    int n = 8;
    for(int i = 0; i<n; i++){
        int currentElement = A[i];
        int noOfEle = 1;
        for(int j = i+1; j<n; j++){
            if(currentElement == A[j]){
                noOfEle += 1;
                A[j] = INT_MIN;
            }
        }
        if(noOfEle > n/2){
            cout<<"we have majority of "<< currentElement<<endl;
            flag=true;
            break;
        }
    }

    if(!flag){
        cout<< "no such element exists which has majority in the array"<<endl;
    }
}