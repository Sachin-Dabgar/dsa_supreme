#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // string str;
    // // cin>>str;
    // getline(cin, str);
    // cout<<str<<endl;

    // string str;
    // char ch[100];

    // str[0] = 'b';
    // str[1] = 'a';
    // str[2] = '\0';
    // str[3] = 'b';
    // str[4] = 'b';
    // str[5] = '\0';
    // str[6] = 'b';

    // ch[0] = 'b';
    // ch[1] = 'a';
    // ch[2] = '\0';
    // ch[3] = 'b';
    // ch[4] = 'b';
    // ch[5] = '\0';
    // ch[6] = 'b';

    // cout<<str<<endl;
    // cout<<ch<<endl;

    string str;
    getline(cin, str);
    cout<<str<<endl;

    cout<<str.length()<<endl;
    cout<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(2, 8)<<endl;
    
}