https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/submissions/code/309381149




/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
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
    SinglyLinkedListNode* get = llist;
    int count = 0;
    while(count != positionFromTail)
    {
        get = get -> next;
        count++;
    }
    return get -> data;
    

}

