#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("a");
    q.push("b");
    q.push("c");

    cout<<"First element"<<q.front()<<endl;
    q.pop();
    cout<<"First element"<<q.front()<<endl;

    cout<<"Size after pop"<<q.size()<<endl;

    return 0;
}