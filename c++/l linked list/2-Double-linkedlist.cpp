#include<iostream>
using namespace std;

class Node {
    public:
 int data;
 Node* next;
 Node* pre;

// constructor
Node(int data){
    this -> data = data;
    this -> next = NULL;
    this -> pre = NULL;
}
};

void insertAtHead(Node* &head ,int d){
if (head == NULL){
    Node* temp = new Node(d);
    head = temp;
}

 else {Node* temp = new Node(d);
 temp -> next = head;
 head -> pre = temp;
 head = temp;}

}
void insertAtTail(Node* &tail,int d){

    if (tail == NULL){
    Node* temp = new Node(d);
    tail = temp;
    }
 else { Node* temp = new Node(d);
   tail -> next = temp;
   temp -> pre = tail;
   tail = temp;}

}

void insertAtMiddle(Node* &head ,Node* &tail, int d , int position){
   if(position ==0){
    insertAtHead(head , d);
    return;
   } 

   Node* temp = head;
   int cnt =1;

   while(cnt < position-1){
    temp = temp->next;
    cnt ++;
   }

   if (temp -> next == NULL ){
    insertAtTail(tail,d);
    return;
   }

   // creating node for d
   Node* insertnode = new Node(d);
   insertnode -> next = temp -> next;
   temp -> next -> pre = insertnode;
   temp -> next = insertnode;
   insertnode -> pre = temp;





}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

Node* node1 = new Node(20);
Node* head = node1;
Node* tail = node1;

print (head);

cout << endl << endl;

insertAtHead(head,5);
print(head);
cout << endl << endl;
insertAtHead(head,8);
print(head);
cout << endl << endl;
insertAtHead(head,9);
print(head);


// inserting by tail

cout << endl << endl;
insertAtTail(tail,1);
print(head);

cout << endl << endl;
insertAtTail(tail,2);
print(head);

cout << endl << endl;

insertAtMiddle( head , tail ,7 ,2);
print (head);
}