#include<iostream>
using namespace std;

int factorial(int n){
    cout<<"function factorial call for value: "<<n<<endl;
    if(n == 1){
        return 1;
    }

    int chotiProblemKaAns = factorial(n-1);
    int badiProblemKaAns = n * chotiProblemKaAns;
    return badiProblemKaAns;
}


int main(){

    int n = 5;
    int ans = factorial(n);
    cout<<"factorial of "<<n<<" is "<<ans<<endl;

    return 0;
}