#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int n1=0;
    int n2=1;
    int next=0;
    int sum=0;

    for(int i = 1; i<=n;i++){
        if(i==1){
            cout<< n1<<", ";
            continue;
        }
        if(i==2){
            cout<<n2<<", ";
            continue;
        }
        next=n1+n2;
        n1=n2;
        n2=next;;
        cout<< next <<", ";
    }
}