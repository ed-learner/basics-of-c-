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

    while(head != NULL){
        cout<< head->data <<endl;

        head = head->next; //move to the next data of the linked list
    }

}
