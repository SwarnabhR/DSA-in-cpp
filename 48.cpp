#include<iostream>
using namespace std;

int main(){
    int x;
    cout<< "Enter the amount:"<<endl;
    cin>>x;

    int temp=0;

    temp = x;

    int a,b,c,d;

    a=temp/100;
    temp=x%100;
    b=temp/50;
    temp=x%50;
    c=temp/20;
    temp=x%20;
    d=temp/1;

    cout << "100 Rs. notes =" << a << endl;
    cout << "50 Rs. notes =" << b << endl;
    cout << "20 Rs. notes =" << c << endl;
    cout << "1 Re. notes =" << d << endl;
}