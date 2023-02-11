https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/submissions/code/309087086



/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
   SinglyLinkedListNode*prev = nullptr;
   SinglyLinkedListNode*curr = llist;
   if(position == 0)
   {
       llist = llist -> next;
       curr -> next = nullptr;
       delete curr;
   }
  else
  {
       int count = 0 ;
   while(count < position)
   {
       prev = curr;
       curr = curr -> next;
       count++;
   }  
   prev -> next = curr -> next;
   curr -> next = nullptr;
   delete curr;
  }
  return llist;
}

