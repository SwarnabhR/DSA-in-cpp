#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start=0;
    int end=size-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}



void printArray(int arr[],int size){

    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }

}

int main(){

    int size;
    cout<<"Enter the size of the array: " << endl;
    cin>> size;

    int arr[size];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout << "Enter the key you want to search the occurrences: " << endl;
    cin >> key;

    cout<<"The array: "<<endl;
    printArray(arr,size);
    firstOcc(arr,size,key);
    cout << "First Occurrence array: " << endl;
    printArray(arr,size);

    return 0;
}