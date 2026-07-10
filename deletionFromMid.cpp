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

void insertionAtbegining(Node* &head, int data){
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

void deletionAtMid(Node* &head, int pos){


    // Empty List
    if(head == nullptr){
        return;
    }

    // Invalid Position
    if(pos <= 0){
        return;
    }

    // Delete First Node
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = nullptr;
    Node* temp;
    for(int i=1; i<pos; i++){
        prev = curr;
        curr = curr->next;
    }
    temp = curr;
    prev->next = curr->next;
    delete temp;

}

void printList(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main(){
    int n ;
    cout<<"Enter the size of the list : ";
    cin>>n;

    Node* head = nullptr;

    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        insertionAtbegining(head, data);
    }


    printList(head);

    cout<<"Enter the position you want to delete : ";
    int pos; cin>>pos;
    deletionAtMid(head,pos);
    cout<<"after the deletion -> ";
    printList(head);

}