https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/submissions/code/309084903




/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* curr = llist;
    SinglyLinkedListNode*prev = nullptr;
    int count = 0;
    while(count<position)
    {
        prev = curr;
        curr = curr -> next;
        count ++;
    }
    prev -> next = temp;
    temp -> next = curr;
    
    return llist;
    

}

