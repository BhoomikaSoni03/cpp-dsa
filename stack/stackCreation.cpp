//runcpp filename.cpp - to run in terminal
#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

    public:
    Stack(int size){
        this -> size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int n){
        if(size - top >1){
        top++;
        arr[top] = n;
        }else
        cout<<"Stack is full "<<endl;
    }

    void pop(){
        if(top >= 0)
        top--;
        else
        cout<<"Stack is already an empty "<<endl;
    }

    bool isEmpty(){
        if(top == -1)
        return true;
        else
        return false;
        cout<<endl;
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
        cout<<"kuch nh hai kya jhank rha hai ?"<<endl;
        return -1;
        }
    }
};

int main(){
    Stack st(3);

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<st.peek()<<endl;
    st.pop();
     cout<<st.peek()<<endl;


    
}





// int main(){
    
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     cout<<s.top()<<endl;
//     s.pop();
    
//     cout<<s.top()<<endl;

//     if(s.empty()){
//         cout<<"stack is Empty ";
//     }else
//     cout<<"stack is not Empty"<<endl;
//     int n = s.size();
//     cout<<n<<endl;

// }