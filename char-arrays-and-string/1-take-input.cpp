#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // char name[100];
    // cin>>name;

    // cout<<"aap ka naam "<<name<<" hai"<<endl;

    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin>>ch[2];
    // cout<<ch<<endl;
    // cout<<ch[0]<<ch[1]<<ch[2]<<endl;

    // last character is null in character array

    // char name[100];
    // cin>>name;

    // for(int i = 0; i<7; i++){
    //     cout<<"character at index "<< i << " is "<< name[i]<<endl;
    // }

    // char name[4];
    // cin>>name;
    // cout<<name<<endl;

    //  for(int i = 0; i<6; i++){
    //     cout<<"character at index "<< i << " is "<< name[i]<<endl;
    // }

    // char ch[100];
    // cin>>ch;
    // cout<<ch<<endl;

    // char arr[100];
    // cin.getline(arr, 50, '\t');
    // cout<<arr<<endl;

    // char ch[50];
    // cin>>ch[2];
    // cout<<ch<<endl;
    // cin>>ch[49];
    // cout<<ch[49];

    // length of the character string
    // char name[4];
    // cin.getline(name,4);

    // int length = 0;
    // int i = 0;
    // cout<<(int)name[4]<<endl;
    // while(name[i] != '\0'){
    //     cout<<i<<endl;
    //     if(name[i] != ' '){
    //         length++;
    //     }
    //     i++;
    // }
    // cout<<length<<endl;

    // cout<<"length is "<<strlen(name)<<endl;

    // cout<<"size of name array is "<<sizeof(name)/sizeof(char)<<endl;

    // reverse a string

    // replace all spaces
    // char name[100];
    // cin.getline(name, 100);
    // cout<<name<<endl;

    // int i = 0;
    // while(name[i] != '\0'){
    //     if(name[i] == ' '){
    //         name[i] = '@';
    //     }
    //     i++;
    // }

    // cout<<name<<endl;

    // palindrome

    // char ch[100];
    // cin.getline(ch, 100);
    // int len = strlen(ch);

    // bool isPalindrome = true;

    // int i = 0;
    // int j = len - 1;
    // while(i<j){
    //     if(ch[i] != ch[j]){
    //         isPalindrome = false;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }

    // cout<<isPalindrome<<endl;

    char ch[100];
    cin.getline(ch, 100);

    for(int i = 0; ch[i]!='\0'; i++){
        if(ch[i] >= 97){
            // ch[i] = ch[i] - 32;
            ch[i] = ch[i] - 'a' + 'A';
        }
    }

    cout<<ch<<endl;


}