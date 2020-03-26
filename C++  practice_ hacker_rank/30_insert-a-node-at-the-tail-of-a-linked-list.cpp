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

    SinglyLinkedListNode *tempnode = head;
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);

    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL){
            head = newnode;

            }

    else {
        tempnode = head;

        while (tempnode->next != NULL){

              tempnode = tempnode->next;
        }

        tempnode->next = newnode;
    }

    return head;
}
