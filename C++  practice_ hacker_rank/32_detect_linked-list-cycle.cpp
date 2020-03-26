/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {

    Node* currentnode = head;

    while (currentnode != nullptr) {
        // make every node cycle on itself as you traverse the list, and
        // the moment you find a node cycling on itself, you know there was a cycle in the original list

        if (currentnode->next == currentnode) {
            return true;
        }

        Node* temporarynode = currentnode;

        currentnode = currentnode->next;

        temporarynode->next = temporarynode;
    }

    return false;
}
