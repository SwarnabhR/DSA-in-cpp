#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start=0;
    int end=size-1;

    int mid=start+((end-start)/2);

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
        
    }

    return -1;

}

void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int size;
    cin>> size;

    int arr[size];
    for(int i = 0; i<size; i++){
        cin>> arr[i];
    }

    int key;
    cout<< "Enter the key you want to search in the array:"<<endl;
    cin>> key;
    
    int index=binarySearch(arr,size,key);
    cout<<"Index of "<< key << " is "<< index << endl;

    return 0;
}