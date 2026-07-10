#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtEnding(Node* &head, int data){
    Node* temp = new Node(data);
    if(head == nullptr){
        head = temp;
        return;
    }

    Node* curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = temp;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    int size;
    cin>>size;

    Node* head = nullptr;
    for(int i =0; i<size; i++){
     int data;
     cin>>data;
     insertAtEnding(head, data);
    }

    printList(head);
}