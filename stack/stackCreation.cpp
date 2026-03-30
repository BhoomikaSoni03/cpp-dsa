//runcpp filename.cpp - to run in terminal
#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.top()<<endl;
    s.pop();
    
    cout<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is Empty ";
    }else
    cout<<"stack is not Empty"<<endl;
    int n = s.size();
    cout<<n<<endl;

}