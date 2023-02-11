https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/submissions/code/309082159




// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
 
 
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
  SinglyLinkedListNode* st = new SinglyLinkedListNode(data);
   SinglyLinkedListNode* temp = nullptr;
   if(head == nullptr)
   {
       head = st;
       st -> next = nullptr;
   }
   else
   {
       temp = head;
        while(temp->next!=nullptr)
        {
           temp = temp -> next;
           
        }

 temp -> next = st;
 }
 return head;      
   }
  

