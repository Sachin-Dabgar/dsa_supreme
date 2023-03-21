#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55

void printSubSequence(string s, string ans, int i, vector<string>& v){
    //base case
    if(i == s.length()){
        // cout << ans << endl;
        v.push_back(ans);
        return;
    }

    
    // include
    printSubSequence(s, ans+s[i], i+1, v);

    // exclude
    printSubSequence(s, ans, i+1, v);


    
}


int main(){
    string s = "abc";
    string ans = "";
    int i = 0;
    vector<string> ansVector;
    printSubSequence(s, ans, i, ansVector);
    for(auto i: ansVector){
        cout << i << endl;
    }
}