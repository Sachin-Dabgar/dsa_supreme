#include<iostream>
using namespace std;

void findLastOccurence(string& s, int i, char ch, int& ans){

    if(i == s.length()){
        return;
    }


    if(s[i] == ch){
        ans = i;
    }
    return findLastOccurence(s, i+1, ch, ans);
}

int main(){
    string s = "abcddefgd";
    char ch = 'd';
    int i = 0;
    int ans = -1;
    findLastOccurence(s, i, ch, ans);
    cout<<ans<<endl;
}