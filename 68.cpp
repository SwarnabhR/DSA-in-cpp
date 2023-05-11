#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    
    int start=s;
    int end=e;

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
        cout<< arr[i]<<" "<<endl;
    }
}

int main(){

    int size;
    cin>> size;

    int arr[size];
    cout<< "Enter the elements in the array: "<<endl;

    for(int i = 0; i<size; i++){
        cin>> arr[i];
    }
    
    printArray(arr,size);
    cout<<"Pivot is "<<getPivot(arr,size)<<endl;

    int key;
    cout<<"Enter the key you want to find:"<<endl;
    cin>>key;

    int pivot=getPivot(arr,size);
    if(key>=arr[pivot]&&key<=arr[size-1]){
        return binarySearch(arr,pivot,size-1,key);
    }
    else{
        return binarySearch(arr,0,pivot-1,key);
    }

    return 0;
}