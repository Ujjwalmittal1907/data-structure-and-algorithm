#include <iostream>
using namespace std;


class Node {
public:
int data;
Node* next ;

// making of a constructor 
Node(int data){
    this -> data = data;
    this -> next = NULL;
}

~Node(){
    int value = this -> data;
    if (this -> next != NULL){
    }
    cout << "memory is free for node " << value << endl;
}
};

// yaha thodi game alag hai yaha hamare saare kaam tail se ban jaate hai 
// as circular hai to dono head and tail ka koi logic nahi hai isliye hum tail
// se puri circular linked list access ker sakta hau...


void insertNode(Node* &tail , int element , int d){
    // empty list
    if (tail == NULL ){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        // non-empty list
        // assuming that element is present in the list
        Node* curr = tail;
while(curr -> data != element){
    curr = curr -> next;
}


        // element found -> curr is representing
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp ;  
    }
}

void deleteNode(Node* &tail,int value){
    if(tail == NULL){
        cout << "list is empty , please check again" << endl;
        return ;
    }
    else{
  // non empty 
  // assuming that "value" is present in the linked list
  Node* pre = tail;
  Node* curr = pre -> next;
  while(curr -> data != value){
    pre = curr;
    curr = curr -> next;
  }
  pre -> next = curr -> next;
  if(tail == curr){
    tail = pre;
  }
  curr -> next = NULL;
  delete curr; 

    }
}



void print (Node* tail){
    Node* temp = tail;
    // cout << tail -> data << " ";
    // while(tail -> next != temp){
    //     cout << tail -> data << " ";
    //     tail = tail -> next;

    // }
    // cout << " ";

    // doiung same by do while loop

    do{cout << tail -> data << " ";
     tail = tail -> next;

    }while(tail != temp);
    cout << endl;
}
int main()
{

Node* tail = NULL;
insertNode(tail,5,3);
print (tail);
insertNode(tail,3,5);
print(tail);

insertNode(tail,5,7);
print(tail);

insertNode(tail,7,9);
print(tail);

insertNode(tail,5,6);
print(tail);

insertNode(tail,9,10);
print(tail);

deleteNode(tail , 6);
print(tail);

deleteNode(tail , 10);
print(tail);
}