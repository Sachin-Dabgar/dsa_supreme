#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int> v){
    sort(v.begin(), v.end());
    // int dupElement;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == v[i+1]){
            return v[i];
        }
    }
    return -1; 
}

int main() {
  vector<int> arr{
      1,3,4,2,2
  };

  int dup = findDuplicate(arr);
  cout<<dup<<endl;
}