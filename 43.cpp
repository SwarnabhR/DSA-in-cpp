#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int m=n;
    int mask=0;

    if(n==0){
        cout<<"1"<<endl;
    }

    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int a = ~n&mask;
    cout<<a<<endl;
}