#include<iostream>
using namespace std;

int mountainPeak(int arr[], int size){

    int s=0, e=size-1;
    int mid = s + (e-s)/2;
    int peak;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e=mid;
        }
        mid= s + (e-s)/2;
    }

}

int main(){
    int size;
    cin >> size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    return 0;
}