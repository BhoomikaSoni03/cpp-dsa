#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    // Node* prev;

    Node(int data){
        this->data = data;
        this->next= nullptr;
        // this->prev = nullptr;
    }
};

 void insertion(Node* &head, int data){
    Node* temp = new Node(data);
    if(head == nullptr){
        head = temp;
        return;
    }

    Node* curr = head;
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    curr->next = temp;
 }

void insertAtMiddle(Node* &head, int data, int pos){
    int cnt = 0;
    Node* temp = new Node(data);
    Node* curr = head;
     
    if(head == nullptr && pos > 1){
        return;
    } 

    if(pos == 1){
        temp->next = head;
        head = temp;
        return;
    }

    for(int i=1; i<pos-1; i++){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}


    void printList(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}

int main(){
    int size;
    cout<<"Enter the size of the list : ";
    cin>>size;
    Node* head = nullptr;
    int data;
    for(int i=0; i<size; i++)
    {

        cin>>data;
        insertion(head, data);
    }

     
    cout<<"enter the position you want to put the element :";
    int pos;
    cin>>pos;
    int data2; 
    cout<<"Enter the element you want to put on the position: ";
    cin>>data2;
    insertAtMiddle(head,data2, pos);

    printList(head);
}