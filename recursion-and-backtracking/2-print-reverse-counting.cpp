#include<iostream>
using namespace std;

void printCounting(int n){
    cout<<"function call for value: "<<n<<endl;

    // base case
    if(n == 0){
        return;
    }


    // processing
    cout<<n<<endl;
    // recursive function/relation
    printCounting(n-1);
}


int main(){

    int n = 5;
    printCounting(n);
    return 0;
}