#include<iostream>
using namespace std;

int sqrtInt(int arr[], int size, int key){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        int square=mid*mid;

        if(square==arr[key]){
            return mid;
        }

        else if(square<arr[key]){
            ans=mid;
            s=mid+1;
        }

        else if(square>arr[key]){
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){

    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>> size;

    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key:"<<endl;
    cin>> key;

    int tempSol=sqrt();

    return 0;
}