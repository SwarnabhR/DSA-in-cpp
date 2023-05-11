#include<iostream>
using namespace std;

void printSum()

int main(){

    int row, col;
    int arr[row][col];
    
    cout<<"Enter the no. of rows and columns: "<<endl;
    cin>> row>> col;
    cout<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
        
    }

    return 0;
}