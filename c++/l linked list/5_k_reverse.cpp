// Node* kReverse(Node* head, int k) {
//     // Write your code here.

//     Node* pre = NULL;
//     Node* forw = NULL;
//     Node* curr = head;
//     // base case 
//     if (head == NULL){
//         return NULL;
//     }

//   // solving 1 case
    
//     int count = 0;
//     while(count < k && curr != NULL){
//         forw = curr -> next;
//         curr -> next = pre;
//         pre = curr;
//         curr = forw;
//         count ++;

//     }

//     // using recursion
//     if (forw  != NULL){
//       head -> next = kReverse(forw ,k);
//     }
//     return pre;
// }