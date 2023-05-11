#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i=1;
    char a=65+n-i;

    while(i<=n){
        int j=1;
        char a=65+n-i;
        while(j<=i){
             cout<<a<<" ";
             j++;
             a++;
        }
        cout<<endl;
        i++;   
    }
}