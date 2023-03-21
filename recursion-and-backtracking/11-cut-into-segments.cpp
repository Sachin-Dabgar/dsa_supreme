#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int cuttingRod(int n, int x, int y, int z){
    if(n == 0){
        return 0;
    }

    if(n < 0){
        return INT_MIN;
    }


    int ans1 = cuttingRod(n-x, x, y, z);
    ans1++;
    int ans2 = cuttingRod(n-y, x, y, z);
    ans2++;
    int ans3 = cuttingRod(n-z, x, y, z);
    ans3++;
    int finalAns = max(ans1, max(ans2, ans3));
    return finalAns;
}


int main(){
    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;
    int ans = cuttingRod(n, x, y, z);
    if(ans < 0){
        cout<<"not possible to cut the rod into segments"<<endl;
    }
    else{
        cout<<"maximum number of segments : "<<ans<<endl;
    }
    
}