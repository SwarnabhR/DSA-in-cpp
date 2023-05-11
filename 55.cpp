#include<iostream>
using namespace std;

bool BitCount1(int n1){
    int count1 = 0;
    int i=n1;
    while(i!=0){
        if(i/1!=0){
            count1++;
        }
        else{
            continue;
        }
        i=i/10;
    }
    return count1;
}

bool BitCount2(int n2){
    int count2 = 0;
    int i=n2;
    while(i!=0){
        if(i/1!=0){
            count2++;
        }
        else{
            continue;
        }
        i=i/10;
    }
    return count2;
}

int main(){
    int n1,n2;
    cin>> n1>> n2;
    int a=BitCount1(n1);
    int b=BitCount2(n2);
    int c=a+b;
    cout<<b<<endl;
    return 0;
}