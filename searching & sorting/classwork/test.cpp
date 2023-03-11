#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <array>
#include <cmath>
#include<iomanip>

using namespace std;
double division(int dividend, int divisor, int p) { // 28 3 7
    int s = divisor; // 10
    int e = dividend; // 9
    int ans = -1; // 9
    while (s <= e) { // 10 <= 10
        int mid = s + (e - s) / 2; // 10
        if (mid * divisor <= dividend) { // 10 * 3 <= 28
            ans = mid; // 9
            s = mid + 1; // 10
        } else {
            e = mid - 1; // 9
        }
    }
    double finalAns = ans; // 9.33
    double rem = dividend - divisor * finalAns; // 1
    double step = 0.1; // 0.001
    for (int i = 0; i < p; i++) {
        cout<<"````````````````````````````````"<<endl;
        cout<<"current precision : "<<i<<endl;
        rem *= 10.0; // 10
        cout<<"current rem value: "<<rem<<endl;
        int digit = floor(rem / divisor); //  10/3 = 3
        cout<<"current digit value : "<<digit<<endl;
        finalAns += digit * step; // 9.33 + 3 * 0.001 = 9.333
        cout<<"new final ans value: "<<finalAns<<endl;
        rem -= digit * divisor; // 10 - 3 * 3 = 1
        cout<<"new rem value: "<<rem<<endl;
        step /= 10; // 0.0001
        cout<<"new step value: "<<step<<endl;
    }
    cout<<"last final value "<<finalAns<<endl;
    return finalAns;
}
int main() {
    int divisor,dividend,p;
    cout<<"Enter the Dividend: "<<endl;
    cin>>dividend;
    cout<<"Enter the Divisor: "<<endl;
    cin>>divisor;
    cout<<"Enter the precision: "<<endl;
    cin>>p;
    double ans=division(dividend,divisor,p);
    cout<<fixed<<ans;
}