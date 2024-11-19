#include <iostream>
using namespace std;	

class Node {
public:
int data;
Node* next;

// constructor
Node(int data){
  
  this -> data = data;
  this -> next = NULL;
}
};

void insertATHead(Node* &head , int d){
  Node* temp = new Node(d);
  temp -> next = head;
  head =temp ;
}
void insertAtTail (Node* &tail, int d){
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = temp -> next;

}

void insertAtMiddle(Node* head , Node* tail, int position , int d){

  if (position ==0){
    insertATHead(head ,d);
    return;
  }

  int cnt =1;
  Node* temp = head;
  while(cnt < position-1){
    temp = temp -> next;
    cnt ++;
  }

  if (temp == NULL){
    insertAtTail(tail , d);
    return;

  }

// create a node 
Node* insertnode = new Node(d);
insertnode -> next = temp -> next;
temp -> next = insertnode; 

}

void print (Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp-> data << " ";
    temp = temp -> next;
  }
  
  
}
void reverseAL(Node* &head){
    Node* pre = NULL;
    Node* forw= head;
    forw= head -> next;
    while(forw != NULL){
        head-> next = pre;
        pre = head;
        head = forw;
        forw = head -> next;
        }

        head -> next = pre;

    }
    

int main()
{
  Node* node1 = new Node(10); 
  cout << node1 -> data << endl;
  cout << node1 -> next << endl;

  Node* node2 = new Node(5);
  cout << node2 -> data << endl ;
  cout << node2 -> next << endl;

  Node* head = node1;
  Node* tail = node1;
  insertATHead(head , 3);
  print (head);
  cout << endl;

  insertATHead(head , 9);
  print (head);
  cout << endl << endl;
  insertAtTail(tail ,3);
  print (head);
  cout << endl << endl;

  insertAtMiddle(head , tail , 2,7);
  print(head);
  return 0;
}