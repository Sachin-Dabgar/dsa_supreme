#include<iostream>
#include<vector>
using namespace std;

void printSpiral(vector<vector<int>> matrix){
    int nCols = matrix[0].size();
    int nRows = matrix.size();
    int startingRow = 0;
    int endingCol = nCols-1;
    int endingRow = nRows-1;
    int startingCol = 0;

    int totalElements = nRows*nCols;
    int count = 0;
    while(count<totalElements){
        //starting row
        for(int j = startingCol; j<=endingCol && count<totalElements; j++){
            cout<<matrix[startingRow][j]<<" ";
            count++;
        }
        startingRow++;

        for(int i = startingRow; i<=endingRow && count<totalElements; i++){
            cout<<matrix[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        for(int j = endingCol; j>=startingCol && count<totalElements; j--){
            cout<<matrix[endingRow][j]<<" ";
            count++;
        }
        endingRow--;

        for(int i = endingRow; i>=startingRow && count<totalElements; i--){
            cout<<matrix[i][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }

}

int main(){

    int rows = 5; 
    int cols = 3;
    vector<vector<int>> arr(rows, vector<int>(cols));

    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cin>>arr[i][j];
        }
    }

    cout<<"original array"<<endl;
    
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    printSpiral(arr);
    cout<<endl;

}