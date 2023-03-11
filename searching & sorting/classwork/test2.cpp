#include<iostream>
#include <iomanip>

using namespace std;
int main(){
    long double step = 0.1;
    long double number = 9;
    for(int i = 0; i<5; i++){
        cout<<"```````````````````"<<endl;
        number = number * step;
        cout<<"number"<<number<<endl;
        step = step / 10;
        cout<<step<<endl;
        std::cout << std::fixed << std::setprecision(std::numeric_limits<double>::digits10) << num << std::endl;  // prints 0.000000000000009000000000000000
    }
}


// #include <iostream>
// #include <iomanip>
// #include <gmpxx.h>

// int main(){
//     mpf_class step("0.1", 128); // Set precision to 128 bits
//     mpf_class number("9", 128); // Set precision to 128 bits
//     for(int i = 0; i<7; i++){
//         step /= 10;
//         std::cout << step << std::endl;
//         number *= step;
//         std::cout << std::setprecision(50) << number << std::endl;
//     }
// }
