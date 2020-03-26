/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *list1_currentnode = head1;
    SinglyLinkedListNode *list2_currentnode = head2;

    bool nodesmatch = false;

    while(!nodesmatch){

        list2_currentnode = head2;

        while(list2_currentnode) {

            if(list1_currentnode == list2_currentnode){

                nodesmatch = true;
                break;
            }

          list2_currentnode = list2_currentnode->next;
        }

       list1_currentnode = list1_currentnode->next;
    }

   return list2_currentnode->data;
}
