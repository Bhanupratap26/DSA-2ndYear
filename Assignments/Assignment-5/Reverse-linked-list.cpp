https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/submissions/code/309240832




/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode*curr = llist;
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* nexty = nullptr;
    
    while(curr!= nullptr)
    {
        nexty = curr -> next;
        curr -> next = prev;
        
        prev = curr;
        curr= nexty;
    }
    llist = prev;
    while(llist)
    {
        cout<<llist -> data<<endl;
        llist = llist -> next;
    }
}

