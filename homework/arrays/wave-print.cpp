#include <iostream>
#include<vector>
using namespace std;

void printWave(vector<vector<int>> v){
    for(int col = 0; col<v[0].size(); col++){
        if((col & 1) == 0){
            for(int row = 0; row<v.size(); row++){
                cout<<v[row][col]<<" ";
            }
        }
        else{
            for(int row = v.size()-1; row>=0; row--){
                cout<<v[row][col]<<" ";
            }
        }
    }
    // for(int i = 0; i<v.size(); i++){
    //     for(int j = 0; j<v[i].size(); j++){
    //         cout<<v[i][j];
    //     }
    // }
}

int main() {
  vector<vector<int>> v {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
  };

  printWave(v);
}