// #include <iostream>
// #include<vector>
// using namespace std;

// approach 1

// void sortColors(vector<int> v){
//     int zeros=0, ones=0, twos=0;
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] == 0){
//             zeros++;
//         }
//         else if(v[i] == 1){
//             ones++;
//         }
//         else{
//             twos++;
//         }
//     }

//     // cout<<zeros<<ones<<twos;

//     int i = 0;
//     while(zeros--){
//         v[i] = 0;
//         i++;
//     }

//     while(ones--){
//         v[i] = 1;
//         i++;
//     }

//     while(twos--){
//         v[i] = 2;
//         i++;
//     }

//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main() {
//   vector<int> arr{
//       1,0,2,2,0,1
//   };

//   sortColors(arr);
// }


// approach 2

#include <iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> v){
    int l = 0, m = 0, h = v.size()-1;

    while(m<=h){
        if(v[m] == 0){
            swap(v[l], v[m]);
            l++;m++;
        }
        else if(v[m] == 1){
            m++;
        }
        else{
            swap(v[m], v[h]);
            h--;
        }
    }

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main() {
  vector<int> arr{
      1,0,2,2,0,1
  };

  sortColors(arr);
}