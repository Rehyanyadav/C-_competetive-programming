#include<iostream>
using namespace std;


//* singly linked list 


class Node{
    public:
    int data;
    Node*next;
    //* constructor 
Node(int data){
    this->data = data;
    this->next= NULL;

}




};
//* insert at head 

void InsertAtHead(Node* &head , int d){
     // * new node create 
     Node* temp = new Node(d);
     temp->next = head;
     head = temp;


}
//* traverse linked list 

void print(Node* head){
    Node*temp = head;
    while(temp !=head){
        cout<<temp ->data <<" ";
        temp = temp -> next;

    }
    cout<<endl;

}
int main(){
//* first Node 
Node* node1= new Node(10);

// cout<<node1 ->data <<endl;
// cout<<node1 ->next<<endl;
//* head pointer to node 1

Node*head = node1;
print (head);
InsertAtHead(head,12);
print(head);

}