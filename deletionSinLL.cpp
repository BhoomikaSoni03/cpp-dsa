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

void insetionAtEnd(Node* &head, int data){
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

Node* deletionAtBegining(Node* head){
    if(head == nullptr){
        return nullptr;
    }

    Node* temp = head;
    Node* curr = temp->next;
    delete temp;
    return curr;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"Null";
}

int main(){
    int n;
    cout<<"Enter the size of the list:";
    cin>>n;
    Node* head = nullptr;
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        insetionAtEnd(head, data);
    }
    
    cout<<"list before the deletion: "<<endl;
    printList(head);
   cout<<endl;
    cout<<"list after the deletion: "<<endl; 
    head = deletionAtBegining(head);
    printList(head);
}