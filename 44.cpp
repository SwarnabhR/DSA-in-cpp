#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    
    int i=0;
    

    for(i;i<=30;i++){
        int a = pow(2,i);
        if(a==n){
            cout<< "TRUE" <<endl;
            break;
        }
        else{
            cout<< "FALSE"<<endl;
            break;
        }
        

    }
    
}