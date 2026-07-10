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

int getLen(Node* head){
    Node* temp = head;
    int cn = 0;
    while(temp!= nullptr){
        cn++;
        temp = temp->next;
    }
    return cn;
}

void deletionAtEnd(Node* &head){
  if(head == nullptr){
    return;
}

if(head->next == nullptr){
    delete head;
    head = nullptr;
    return;
}
    
    Node* temp;
    Node* curr = head;
    int len = getLen(head);
    for(int i =0; i <len-2; i++){
        curr = curr->next;
    }
    temp= curr->next;
    curr->next = nullptr;
    delete temp;
     
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
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
    cout<<"list after the deletion from the end: "<<endl; 
    deletionAtEnd(head);
    printList(head);

 
    cout<<endl;
    cout<<"list after the deletion from the begining: "<<endl; 
    head = deletionAtBegining(head);
    printList(head);
    cout<<endl;
    
}