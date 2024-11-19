#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
// constructor
Node(int val){
    this-> data = val;
    this -> next = NULL;
}
};

void insertAthead(Node* &head , int val){
 Node* new_node = new Node(val);
 new_node -> next = head;
 head = new_node;

}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
void reverse(Node* &head , Node* curr , Node* pre){
    // base case
    if (curr == NULL){
        head = pre;
        return;
    }

    Node* forward = curr -> next;
    reverse(head , forward, curr);
    curr -> next = pre;
}
Node* reverseLinkedList(Node *head){
    Node* curr = head;
    Node* pre = NULL ;
    reverse(head,curr, pre);
    return head;
}

int main(){
 Node * node1 = new Node(10);
 Node* head = node1;
 insertAthead(head , 20);
 insertAthead(head , 30);
 display(head);
 cout << endl;
 reverseLinkedList(head);
 display(head);




}