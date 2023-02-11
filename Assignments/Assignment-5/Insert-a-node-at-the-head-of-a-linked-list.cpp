https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/submissions/code/309083570



// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
SinglyLinkedListNode* temp = nullptr;
if(llist == nullptr)
{
    llist = newnode;
    llist -> next = nullptr;
}

else 
{
    temp = llist;
     newnode -> next = temp;
}
llist = newnode;
return llist;
}
