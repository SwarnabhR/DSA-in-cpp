#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>> n;

    int digit=0, ans=0, i=0;

    while(n!=0){
        digit=n%10;
        if(ans>INT16_MAX/10 || (ans<INT16_MIN/10)){
            return 0;
        }
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<< ans<< endl;
}