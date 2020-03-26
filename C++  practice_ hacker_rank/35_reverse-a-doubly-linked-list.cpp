/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode *temporarynode = head;

    while(temporarynode != NULL){

        head = temporarynode;
        temporarynode = head->next;
        head->next = head->prev;
        head->prev = temporarynode;
    }

    return head;
}
