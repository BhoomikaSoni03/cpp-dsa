#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top ;
    int last;

    public:
    Stack(int size){
        this -> size = size;
        top = -1;
        last = size;
        arr = new int[size];
    }

    void push1(int ele){
        if(last - top > 1){
            top++;
            arr[top] = ele;
        }
    }

    void push2(int ele){
        if(last - top > 1){
            last--;
            arr[last] = ele;
        }
    }

    int pop1(){
        int popval;
        if(top >= 1){
            popval = arr[top];
            top--;
        }else{
            cout<<"underflow";
        }
        return popval;
    }

    int pop2(){
        int popval;
        if(last >= size){
            popval = arr[last];
            last++;
        }else{
            cout<<"underflow";
        }
        return popval;
    }

};

int main(){
    Stack st(3);
    st.push1(1);
    st.push2(3);
    st.push1(2);
    

}