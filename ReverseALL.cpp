/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node*current=head;
        Node*prev=NULL;
        Node*next=NULL; //used as temp for current node

        while(current) {
            next = current->next; //storing current's next temprorarily
            current->next = prev; //reversing the pointer
            prev = current; //reversing pointers
            current = next; //retrieving current's value for next steps
        }

        return prev;
    }
};