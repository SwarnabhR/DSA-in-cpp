#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;
    s.push("a");
    s.push("b");
    s.push("c");
    cout<<"Top element->"<<s.top()<<endl;

    s.pop();
    cout<<"Top element->"<<s.top()<<endl;
    cout<<"Size of the stack"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;

    return 0;
}