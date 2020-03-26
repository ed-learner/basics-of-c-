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
DoublyLinkedListNode * sortedInsert(DoublyLinkedListNode *head, int data){

    if(head == NULL){
        DoublyLinkedListNode *node = new DoublyLinkedListNode(data);
        node->data = data;
        return node;
    }

    if(head->data <= data){
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;
    }

    else if (head->data > data){
        DoublyLinkedListNode *node = new DoublyLinkedListNode(data);
        node->data = data;

        node->next = head;
        node->prev = head->prev;

        head ->prev = node;
        head = node;
    }
    return head;
}
