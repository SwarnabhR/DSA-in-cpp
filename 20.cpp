#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i=1;
    char a=65;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<a<<" ";
            j++;
        }
        a++;
        cout<<endl;
        i++;
    }
}
