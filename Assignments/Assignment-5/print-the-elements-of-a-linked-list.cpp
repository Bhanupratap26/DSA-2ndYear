https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/submissions/code/296910618




// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
while (head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}

}

