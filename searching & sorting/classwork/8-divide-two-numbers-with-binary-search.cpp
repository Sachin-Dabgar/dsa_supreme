#include<iostream>
#include<limits.h>
using namespace std;

double divideValues(int dividend, int divisor){

    if(divisor == 0){
        return INT_MIN;
    }

    int s = 0;
    int e = abs(dividend);

    int possibleAns;
    int m = s + (e-s)/2;
    while(s<=e){
        if(abs(m * divisor) <= abs(dividend)){
            possibleAns = m;
            s = m + 1;
        }
        else{
            e = m - 1;
        }
        m = s + (e-s)/2;
    }

    double step = 0.1;
    double finalAns = possibleAns;
    for(int i = 0; i<3; i++){
        for(double j = finalAns; j*abs(divisor)<=abs(dividend); j = j + step){
            finalAns = j;
        }
        step = step / 10;
    }

    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
        return -finalAns;
    }
    return finalAns;
}

int main(){
    int dividend = -2147483648;
    int divisor = -1;

    double ans = divideValues(dividend, divisor);
    if(ans == INT_MIN){
        cout<<"undefined"<<endl;
    }
    else{
        cout<<"ans is "<<ans<<endl;
    }

}