#include<iostream>
using namespace std;
int arrSum(int arr[], int size){
    int arrsum=0;

    for(int i = 0;i<size;i++){
        arrsum=arrsum+arr[i];
    }
    return arrsum;
}

int main(){
    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    
    int sum = arrSum(arr, size);
    cout << "The sum of the array is:" << sum << endl;

    return 0;
}