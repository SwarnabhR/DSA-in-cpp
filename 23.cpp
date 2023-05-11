#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i=1;

    while(i<=n){
        int a=n-i;
        while(a){
            cout<< " ";
            a--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}