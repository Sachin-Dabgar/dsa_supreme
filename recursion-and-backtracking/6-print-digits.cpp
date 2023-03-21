#include<iostream>
#include<limits.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55

void printDigit(int n){
    //base case
    if(n == 0){
        return;
    }

    int rem = n%10;
    printDigit(n/10);
    cout<<rem<<endl;

}


int main(){

    int n = 7540;
    printDigit(n);
}