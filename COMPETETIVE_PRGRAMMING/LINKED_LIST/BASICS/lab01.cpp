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
int main(){
//* first Node 
Node* node1= new Node(10);

cout<<node1 ->data <<endl;
cout<<node1 ->next<<endl;
}