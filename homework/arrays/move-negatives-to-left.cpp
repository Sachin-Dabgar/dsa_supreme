#include <iostream>
#include<vector>
using namespace std;

void moveNegativesToLeft(vector<int> v){
    
    int l = 0, h = v.size()-1;

    while(l<h){
        if(v[l]<0){
            l++;
        }
        else if(v[h]>0){
            h--;
        }
        else{
            swap(v[l], v[h]);
        }
    }

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main() {
  vector<int> arr{
      2,-1,4,-5,-9,6,-8,2,-1
  };

  moveNegativesToLeft(arr);
}